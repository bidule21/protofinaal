#ifndef PROTOFINAAL_H
#define PROTOFINAAL_H

#include <QJsonDocument>
#include <QMainWindow>
#include <QMessageBox>
#include <QTextStream>
#include <QJsonObject>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QMenuBar>
#include <QLabel>
#include <QFile>

#include "team.h"

extern bool verbose;

class Protofinaal : public QMainWindow
{
    Q_OBJECT

public:
    Protofinaal(QWidget *parent = nullptr);
    ~Protofinaal();
    void open();
    void save();
    void write(QJsonObject &json) const;

private:
    QVector<Team*> teams;
    void createLayout(QJsonObject &jsonObj);
    void createMenus();
    void initialize();
    void readFile(QString fileName);
    void writeFile(QString fileName);
};

#endif // PROTOFINAAL_H
