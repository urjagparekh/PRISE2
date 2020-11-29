#include "PrimerDeleteCondDlg.h"
#include "ui_PrimerDeleteCondDlg.h"

PrimerDeleteCondDlg::PrimerDeleteCondDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrimerDeleteCondDlg)
{
    ui->setupUi(this);

    for(int i = A_TARGET_PCTG; i < primerColumns.size(); i++){
        QString str;
        str = primerColumns[i].replace(QString("-\n"),QString(""));
        str = str.replace('\n',' ');

        ui->comboBox_cond1->addItem(str);
        ui->comboBox_cond2->addItem(str);
        ui->comboBox_cond3->addItem(str);
        ui->comboBox_cond4->addItem(str);
    }

    ui->comboBox_cond1->setCurrentIndex(-1);
    ui->comboBox_cond2->setCurrentIndex(-1);
    ui->comboBox_cond3->setCurrentIndex(-1);
    ui->comboBox_cond4->setCurrentIndex(-1);
    ui->comboBox_GTLT1->setCurrentIndex(-1);
    ui->comboBox_GTLT2->setCurrentIndex(-1);
    ui->comboBox_GTLT3->setCurrentIndex(-1);
    ui->comboBox_GTLT4->setCurrentIndex(-1);
    ui->lineEdit_value1->setText("0");
    ui->lineEdit_value2->setText("0");
    ui->lineEdit_value3->setText("0");
    ui->lineEdit_value4->setText("0");
    ui->label_percent1->setText("");
    ui->label_percent2->setText("");
    ui->label_percent3->setText("");
    ui->label_percent4->setText("");
}

PrimerDeleteCondDlg::~PrimerDeleteCondDlg()
{
    delete ui;
}

void PrimerDeleteCondDlg::accept()
{
    // error checking

    if( ui->comboBox_cond1->currentIndex() < 0 && ui->comboBox_cond2->currentIndex() < 0 &&
        ui->comboBox_cond3->currentIndex() < 0 && ui->comboBox_cond4->currentIndex() < 0 ){
        QMessageBox::about(this,"Condition Error","Please choose at least one condition.");
        return;
    }
    if(ui->comboBox_cond1->currentIndex() >= 0 && ui->comboBox_GTLT1->currentIndex() < 0 ){
        QMessageBox::about(this,"Condition Error","Please choose the constraint for condition 1.");
        return;
    }
    if(ui->comboBox_cond2->currentIndex() >= 0 && ui->comboBox_GTLT2->currentIndex() < 0){
        QMessageBox::about(this,"Condition Error","Please choose the constraint for condition 2.");
        return;
    }
    if(ui->comboBox_cond3->currentIndex() >= 0 && ui->comboBox_GTLT3->currentIndex() < 0){
        QMessageBox::about(this,"Condition Error","Please choose the constraint for condition 3.");
        return;
    }
    if(ui->comboBox_cond4->currentIndex() >= 0 && ui->comboBox_GTLT4->currentIndex() < 0){
        QMessageBox::about(this,"Condition Error","Please choose the constraint for condition 4.");
        return;
    }

    // skip columns[0]: "primer #"; columns[1]: "primer pair"
    deletePrimerCondTitle[0] = ui->comboBox_cond1->currentIndex() + 2;
    deletePrimerCondTitle[1] = ui->comboBox_cond2->currentIndex() + 2;
    deletePrimerCondTitle[2] = ui->comboBox_cond3->currentIndex() + 2;
    deletePrimerCondTitle[3] = ui->comboBox_cond4->currentIndex() + 2;
    deletePrimerCondGtLt[0] = ui->comboBox_GTLT1->currentIndex();
    deletePrimerCondGtLt[1] = ui->comboBox_GTLT2->currentIndex();
    deletePrimerCondGtLt[2] = ui->comboBox_GTLT3->currentIndex();
    deletePrimerCondGtLt[3] = ui->comboBox_GTLT4->currentIndex();


    bool b;
    QString tmpstr = ui->lineEdit_value1->text();
    float value = ui->lineEdit_value1->text().toFloat(&b);
    if(!b){
        QMessageBox::about(this,"Condition Error","Please input an integer percentage\n");
        return;
    }
    deletePrimerCondValue[0] = value;
    value = ui->lineEdit_value2->text().toFloat(&b);
    if(!b){
        QMessageBox::about(this,"Condition Error","Please input an integer percentage\n");
        return;
    }
    deletePrimerCondValue[1] = value;
    value = ui->lineEdit_value3->text().toFloat(&b);
    if(!b){
        QMessageBox::about(this,"Condition Error","Please input an integer percentage\n");
        return;
    }
    deletePrimerCondValue[2] = value;
    value = ui->lineEdit_value4->text().toFloat(&b);
    if(!b){
        QMessageBox::about(this,"Condition Error","Please input an integer percentage\n");
        return;
    }
    deletePrimerCondValue[3] = value;

    QDialog::accept();
}

void PrimerDeleteCondDlg::changeIdx_1(int i)
{
    if(i < 0)
        return;

    QString title = ui->comboBox_cond1->itemText(i);
    if (title.indexOf('%') > 0)
        ui->label_percent1->setText("%");
    else
        ui->label_percent1->setText(" ");
}

void PrimerDeleteCondDlg::changeIdx_2(int i)
{
    if(i < 0)
        return;

    QString title = ui->comboBox_cond2->itemText(i);
    if (title.indexOf('%') > 0)
        ui->label_percent2->setText("%");
    else
        ui->label_percent2->setText(" ");
}

void PrimerDeleteCondDlg::changeIdx_3(int i)
{
    if(i < 0)
        return;

    QString title = ui->comboBox_cond3->itemText(i);
    if (title.indexOf('%') > 0)
        ui->label_percent3->setText("%");
    else
        ui->label_percent3->setText(" ");
}

void PrimerDeleteCondDlg::changeIdx_4(int i)
{
    if(i < 0)
        return;

    QString title = ui->comboBox_cond4->itemText(i);
    if (title.indexOf('%') > 0)
        ui->label_percent4->setText("%");
    else
        ui->label_percent4->setText(" ");
}
