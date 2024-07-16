#include "classplanning.h"
#include "ui_classplanning.h"

ClassPlanning::ClassPlanning(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClassPlanning)
{
    ui->setupUi(this);
    this->setRecords();
    this->initialPlanning();
    this->setFixedSize(800,600);
}

ClassPlanning::~ClassPlanning()
{
    delete ui;
}

void ClassPlanning::on_teachers_currentTextChanged(const QString &currentOption)
{
    ui->lessons->clear();
    ui->lessons->addItem(this->setLesson(currentOption));
    ui->classes->clear();
    ui->classes->addItem(this->setClass(currentOption));
    ui->numberOfClass->clear();
    ui->numberOfClass->addItem(QString::number(this->setNumberOfClass(currentOption)));
}

void ClassPlanning::on_recordButton_clicked()
{
    int dayCounter = 0;
    bool isFound = false;
    int foundIndex = -1;
    QJsonObject newRecord;
    for (int i = 0;i < this->recordInputs.size();i++){
        QJsonValue value = this->recordInputs[i];
        if (value["name"] == ui->teachers->currentText()){
            newRecord = value.toObject();
            isFound = true;
            foundIndex = i;
            break;
        }
    }
    QJsonArray days;
    QVector<QString> setDays;
    if (ui->saturday->isChecked()){
        setDays.push_back("Saturday");
        dayCounter++;
    }
    if (ui->sunday->isChecked()){
        setDays.push_back("Sunday");
        dayCounter++;
    }
    if (ui->monday->isChecked() && dayCounter < 2){
        setDays.push_back("Monday");
        dayCounter++;
    }
    if (ui->tuesday->isChecked() && dayCounter < 2){
        setDays.push_back("Tuesday");
        dayCounter++;
    }
    if (ui->wednesday->isChecked() && dayCounter < 2){
        setDays.push_back("Wednesday");
        dayCounter++;
    }
    if (ui->thursday->isChecked() && dayCounter < 2){
        setDays.push_back("Thursday");
        dayCounter++;
    }
    if (ui->friday->isChecked() && dayCounter < 2){
        setDays.push_back("Friday");
    }
    for (const QString &day : setDays){
        days.append(day);
    }
    if (!this->canSetAtJson(ui->teachers->currentText(),ui->lessons->currentText(),ui->classes->currentText(),ui->numberOfClass->currentText(),days)){
        ui->statusbar->showMessage("Please Fill In All Of The Inputs !", 3000);
        return;
    }
    newRecord["name"] = ui->teachers->currentText();
    newRecord["lessons"] = ui->lessons->currentText();
    newRecord["days"] = days;
    newRecord["class"] = ui->classes->currentText();
    newRecord["numberOfClass"] = ui->numberOfClass->currentText();
    if (isFound){
        this->recordInputs[foundIndex] = newRecord;
    } else {
        this->recordInputs.append(newRecord);
    }
    this->overWriteJsonFile();
    ui->statusbar->showMessage("JSON file updated .", 2000);
}

void ClassPlanning::on_finalSubmitButton_clicked()
{
    for (int i = 0;i < this->recordInputs.size();i++){
        bool isFilled = false;
        int dayIndexSetter = 0;
        QJsonValue value = this->recordInputs[i].toObject();
        for (int j = value["numberOfClass"].toString().toInt();j > 0;){
            int row = this->setRow(value,dayIndexSetter);
            int column = 2;
            for (;j > 0;column++){
                QString inputValue = value["name"].toString() + " " + value["class"].toString();
                Cell* currentCell = this->finalPlan.cellAt(row,column);
                if (!currentCell || !currentCell->value().toString().contains(value["class"].toString())){
                    QString currentValue = this->finalPlan.read(row,column).toString();
                    if (!currentValue.isEmpty()){
                        inputValue += " - " + currentValue;
                    }
                    this->finalPlan.write(row,column,inputValue);
                    j--;
                }
                if (column == 5 && dayIndexSetter == 1){
                    this->auxiliaryPlanSetter(value,j);
                    isFilled = true;
                    break;
                } else if (column == 5){
                    dayIndexSetter = 1;
                    break;
                }
            }
            if (isFilled){
                break;
            }
        }
    }
    this->saveExcelFile();
    ui->statusbar->showMessage("FinalPlan.xlsx saved in directory of program .", 6000);
}
