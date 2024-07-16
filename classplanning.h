#ifndef CLASSPLANNING_H
#define CLASSPLANNING_H

#include <QMainWindow>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QVector>
#include <QDir>
#include "qapplication.h"
#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"

using namespace QXlsx;

QT_BEGIN_NAMESPACE
namespace Ui {
class ClassPlanning;
}
QT_END_NAMESPACE

class ClassPlanning : public QMainWindow
{
    Q_OBJECT

public:
    ClassPlanning(QWidget *parent = nullptr);

    QXlsx::Document finalPlan;

    QJsonArray recordInputs;

    QString setLesson(QString teacherName){
        if (teacherName == "Shabnam Shadroo"){
            return "Beginner & Advanced Programming";
        } else if (teacherName == "Nasrin Ghadamgahi"){
            return "Persian Literature";
        } else if (teacherName == "Hasan Shakeri"){
            return "Discrete Mathematics";
        } else if (teacherName == "Safa Jami"){
            return "Physics 1 & 2";
        } else if (teacherName == "Neda Mohammadi"){
            return "Mathematic 1 & 2";
        } else if (teacherName == "Reza Allahyari"){
            return "Differential Equations";
        } else if (teacherName == "Fatemeh Mostali"){
            return "Statistic & Probability";
        }
    }

    QString setClass(QString teacherName){
        if (teacherName == "Shabnam Shadroo"){
            return "D15";
        } else if (teacherName == "Nasrin Ghadamgahi"){
            return "C10";
        } else if (teacherName == "Hasan Shakeri"){
            return "D15";
        } else if (teacherName == "Safa Jami"){
            return "C13";
        } else if (teacherName == "Neda Mohammadi"){
            return "B16";
        } else if (teacherName == "Reza Allahyari"){
            return "B16";
        } else if (teacherName == "Fatemeh Mostali"){
            return "C13";
        }
    }

    int setNumberOfClass(QString teacherName){
        if (teacherName == "Shabnam Shadroo"){
            return 4;
        } else if (teacherName == "Nasrin Ghadamgahi"){
            return 1;
        } else if (teacherName == "Hasan Shakeri"){
            return 2;
        } else if (teacherName == "Safa Jami"){
            return 4;
        } else if (teacherName == "Neda Mohammadi"){
            return 4;
        } else if (teacherName == "Reza Allahyari"){
            return 2;
        } else if (teacherName == "Fatemeh Mostali"){
            return 1;
        }
    }

    int setRow(QJsonValue currentTeacher,int index){
        if (currentTeacher["days"].toArray()[index] == "Saturday"){
            return 2;
        } else if (currentTeacher["days"].toArray()[index] == "Sunday"){
            return 3;
        } else if (currentTeacher["days"].toArray()[index] == "Monday"){
            return 4;
        } else if (currentTeacher["days"].toArray()[index] == "Tuesday"){
            return 5;
        } else if (currentTeacher["days"].toArray()[index] == "Wednesday"){
            return 6;
        } else if (currentTeacher["days"].toArray()[index] == "Thursday"){
            return 7;
        } else if (currentTeacher["days"].toArray()[index] == "Friday"){
            return 8;
        }
    }

    void initialPlanning(){
        this->finalPlan.write("A1", "Day / Times");
        this->finalPlan.write("A2", "Saturday");
        this->finalPlan.write("A3", "Sunday");
        this->finalPlan.write("A4", "Monday");
        this->finalPlan.write("A5", "Tuesday");
        this->finalPlan.write("A6", "Wednesday");
        this->finalPlan.write("A7", "Thursday");
        this->finalPlan.write("A8", "Friday");
        this->finalPlan.write("B1", "8 - 10");
        this->finalPlan.write("C1", "11.5 - 13");
        this->finalPlan.write("D1", "15 - 17");
        this->finalPlan.write("E1", "19 - 21");
    }

    bool canSetAtJson(QString teacherInput,QString lessonInput,QString classInput,QString numberOfClassInput,QJsonArray daysInput){
        if (teacherInput.isEmpty() || lessonInput.isEmpty() || classInput.isEmpty() || numberOfClassInput.isEmpty() || daysInput.isEmpty()){
            return false;
        }
        return true;
    }

    void auxiliaryPlanSetter(QJsonValue value,int classCounter){ // Use when two input days are full !
        for (int row = 2;row <= 8 && classCounter > 0;++row){
            for (int column = 2;column <= 5 && classCounter > 0;++column){
                QString inputValue = value["name"].toString() + " " + value["class"].toString();
                Cell* currentCell = this->finalPlan.cellAt(row,column);
                if (!currentCell || !currentCell->value().toString().contains(value["class"].toString())){
                    QString currentValue = this->finalPlan.read(row,column).toString();
                    if (!currentValue.isEmpty()){
                        inputValue += " - " + currentValue;
                    }
                    this->finalPlan.write(row,column,inputValue);
                    --classCounter;
                }
            }
        }
    }

    void setRecords(){
        QDir appDir((QCoreApplication::applicationDirPath()));
        QString recordFilePath = appDir.filePath("RecordInputs.json");
        QFile recordFile(recordFilePath);
        recordFile.open(QIODevice::ReadOnly);
        QByteArray readRecords = recordFile.readAll();
        QJsonDocument changeToJson = QJsonDocument::fromJson(readRecords);
        QJsonObject recordObject = changeToJson.object();
        QJsonArray allRecord = recordObject["Record"].toArray();
        recordFile.close();
        this->recordInputs = allRecord;
    }

    void overWriteJsonFile(){
        QDir appDir((QCoreApplication::applicationDirPath()));
        QString recordFilePath = appDir.filePath("RecordInputs.json");
        QFile recordFile(recordFilePath);
        recordFile.open(QIODevice::ReadOnly);
        QByteArray readRecords = recordFile.readAll();
        QJsonDocument changeToJson = QJsonDocument::fromJson(readRecords);
        QJsonObject recordObject = changeToJson.object();
        QJsonArray allRecord = recordObject["Record"].toArray();
        recordFile.close();
        recordObject["Record"] = this->recordInputs;
        QJsonDocument newDoc(recordObject);
        recordFile.open(QIODevice::WriteOnly);
        recordFile.write(newDoc.toJson());
        recordFile.close();
    }

    void saveExcelFile(){
        this->finalPlan.saveAs("FinalPlan.xlsx");
    }

    ~ClassPlanning();

private slots:
    void on_teachers_currentTextChanged(const QString &currentOption);

    void on_recordButton_clicked();

    void on_finalSubmitButton_clicked();

private:
    Ui::ClassPlanning *ui;
};
#endif // CLASSPLANNING_H
