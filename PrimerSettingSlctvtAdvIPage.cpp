#include "PrimerSettingSlctvtAdvIPage.h"
#include "ui_PrimerSettingSlctvtAdvIPage.h"

PrimerSettingSlctvtAdvIPage::PrimerSettingSlctvtAdvIPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::PrimerSettingSlctvtAdvIPage)
{
    ui->setupUi(this);
    //ui->radioButton_default->setChecked(!showSimMeasureAdv);
    //ui->radioButton_showMtx->setChecked(showSimMeasureAdv);
    //this->setFinalPage(!showSimMeasureAdv);
}

PrimerSettingSlctvtAdvIPage::~PrimerSettingSlctvtAdvIPage()
{
    delete ui;
}

void PrimerSettingSlctvtAdvIPage::initializePage()
{

#ifdef MAC
    this->resize(880, 410);
#else
    this->resize(880, 410);
#endif

    QWizard* p = this->wizard();
    prevWidth = p->width();
    prevHeight = p->height();
#ifdef MAC
    p->resize(width()+200, height()+600);
#else
    p->resize(width()+200, height()+200);
#endif


    ui->lineEdit_1->setText(QString("%1").arg(primerPosWtTar[0]));
    ui->lineEdit_2->setText(QString("%1").arg(primerPosWtTar[1]));
    ui->lineEdit_3->setText(QString("%1").arg(primerPosWtTar[2]));
    ui->lineEdit_4->setText(QString("%1").arg(primerPosWtTar[3]));
    ui->lineEdit_5->setText(QString("%1").arg(primerPosWtTar[4]));
    ui->lineEdit_6->setText(QString("%1").arg(primerPosWtTar[5]));
    ui->lineEdit_7->setText(QString("%1").arg(primerPosWtTar[6]));
    ui->lineEdit_8->setText(QString("%1").arg(primerPosWtTar[7]));
    ui->lineEdit_9->setText(QString("%1").arg(primerPosWtTar[8]));
    ui->lineEdit_10->setText(QString("%1").arg(primerPosWtTar[9]));
    ui->lineEdit_11->setText(QString("%1").arg(primerPosWtTar[10]));
    ui->lineEdit_12->setText(QString("%1").arg(primerPosWtTar[11]));
    ui->lineEdit_13->setText(QString("%1").arg(primerPosWtTar[12]));
    ui->lineEdit_14->setText(QString("%1").arg(primerPosWtTar[13]));
    ui->lineEdit_15->setText(QString("%1").arg(primerPosWtTar[14]));
    ui->lineEdit_16->setText(QString("%1").arg(primerPosWtTar[15]));
    ui->lineEdit_17->setText(QString("%1").arg(primerPosWtTar[16]));
    ui->lineEdit_18->setText(QString("%1").arg(primerPosWtTar[17]));
    ui->lineEdit_19->setText(QString("%1").arg(primerPosWtTar[18]));
    ui->lineEdit_20->setText(QString("%1").arg(primerPosWtTar[19]));
    ui->lineEdit_21->setText(QString("%1").arg(primerPosWtTar[20]));
    ui->lineEdit_22->setText(QString("%1").arg(primerPosWtTar[21]));
    ui->lineEdit_23->setText(QString("%1").arg(primerPosWtTar[22]));
    ui->lineEdit_24->setText(QString("%1").arg(primerPosWtTar[23]));
    ui->lineEdit_25->setText(QString("%1").arg(primerPosWtTar[24]));
    ui->lineEdit_26->setText(QString("%1").arg(primerPosWtTar[25]));
    ui->lineEdit_27->setText(QString("%1").arg(primerPosWtTar[26]));
    ui->lineEdit_28->setText(QString("%1").arg(primerPosWtTar[27]));
    ui->lineEdit_29->setText(QString("%1").arg(primerPosWtTar[28]));
    ui->lineEdit_30->setText(QString("%1").arg(primerPosWtTar[29]));

    ui->lineEdit_n1->setText(QString("%1").arg(primerPosWtNonTar[0]));
    ui->lineEdit_n2->setText(QString("%1").arg(primerPosWtNonTar[1]));
    ui->lineEdit_n3->setText(QString("%1").arg(primerPosWtNonTar[2]));
    ui->lineEdit_n4->setText(QString("%1").arg(primerPosWtNonTar[3]));
    ui->lineEdit_n5->setText(QString("%1").arg(primerPosWtNonTar[4]));
    ui->lineEdit_n6->setText(QString("%1").arg(primerPosWtNonTar[5]));
    ui->lineEdit_n7->setText(QString("%1").arg(primerPosWtNonTar[6]));
    ui->lineEdit_n8->setText(QString("%1").arg(primerPosWtNonTar[7]));
    ui->lineEdit_n9->setText(QString("%1").arg(primerPosWtNonTar[8]));
    ui->lineEdit_n10->setText(QString("%1").arg(primerPosWtNonTar[9]));
    ui->lineEdit_n11->setText(QString("%1").arg(primerPosWtNonTar[10]));
    ui->lineEdit_n12->setText(QString("%1").arg(primerPosWtNonTar[11]));
    ui->lineEdit_n13->setText(QString("%1").arg(primerPosWtNonTar[12]));
    ui->lineEdit_n14->setText(QString("%1").arg(primerPosWtNonTar[13]));
    ui->lineEdit_n15->setText(QString("%1").arg(primerPosWtNonTar[14]));
    ui->lineEdit_n16->setText(QString("%1").arg(primerPosWtNonTar[15]));
    ui->lineEdit_n17->setText(QString("%1").arg(primerPosWtNonTar[16]));
    ui->lineEdit_n18->setText(QString("%1").arg(primerPosWtNonTar[17]));
    ui->lineEdit_n19->setText(QString("%1").arg(primerPosWtNonTar[18]));
    ui->lineEdit_n20->setText(QString("%1").arg(primerPosWtNonTar[19]));
    ui->lineEdit_n21->setText(QString("%1").arg(primerPosWtNonTar[20]));
    ui->lineEdit_n22->setText(QString("%1").arg(primerPosWtNonTar[21]));
    ui->lineEdit_n23->setText(QString("%1").arg(primerPosWtNonTar[22]));
    ui->lineEdit_n24->setText(QString("%1").arg(primerPosWtNonTar[23]));
    ui->lineEdit_n25->setText(QString("%1").arg(primerPosWtNonTar[24]));
    ui->lineEdit_n26->setText(QString("%1").arg(primerPosWtNonTar[25]));
    ui->lineEdit_n27->setText(QString("%1").arg(primerPosWtNonTar[26]));
    ui->lineEdit_n28->setText(QString("%1").arg(primerPosWtNonTar[27]));
    ui->lineEdit_n29->setText(QString("%1").arg(primerPosWtNonTar[28]));
    ui->lineEdit_n30->setText(QString("%1").arg(primerPosWtNonTar[29]));
}

void PrimerSettingSlctvtAdvIPage::cleanupPage()
{
    QWizard* p = wizard();
    p->resize(prevWidth, prevHeight);
}

void PrimerSettingSlctvtAdvIPage::changeEvent(QEvent *e)
{
    QWizardPage::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

int PrimerSettingSlctvtAdvIPage::nextId() const
{
    if (ui->radioButton_default->isChecked()) {
        return -1;
    } else {
        return Page_primerSettingAdvII;
    }
}

bool PrimerSettingSlctvtAdvIPage::validatePage()
{
    //showSimMeasureAdv = ui->radioButton_showMtx->isChecked();
    bool b;
    primerPosWtTar[0] = ui->lineEdit_1->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[1] = ui->lineEdit_2->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[2] = ui->lineEdit_3->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[3] = ui->lineEdit_4->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[4] = ui->lineEdit_5->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[5] = ui->lineEdit_6->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[6] = ui->lineEdit_7->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[7] = ui->lineEdit_8->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[8] = ui->lineEdit_9->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[9] = ui->lineEdit_10->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[10] = ui->lineEdit_11->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[11] = ui->lineEdit_12->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[12] = ui->lineEdit_13->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[13] = ui->lineEdit_14->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[14] = ui->lineEdit_15->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[15] = ui->lineEdit_16->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[16] = ui->lineEdit_17->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[17] = ui->lineEdit_18->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[18] = ui->lineEdit_19->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[19] = ui->lineEdit_20->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[20] = ui->lineEdit_21->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[21] = ui->lineEdit_22->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[22] = ui->lineEdit_23->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[23] = ui->lineEdit_24->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[24] = ui->lineEdit_25->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[25] = ui->lineEdit_26->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[26] = ui->lineEdit_27->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[27] = ui->lineEdit_28->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[28] = ui->lineEdit_29->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtTar[29] = ui->lineEdit_30->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    for( int i = 30; i < MAX_PRIMER_LEN; i++ )
        primerPosWtTar[i] = primerPosWtTar[29];


    primerPosWtNonTar[0] = ui->lineEdit_n1->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[1] = ui->lineEdit_n2->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[2] = ui->lineEdit_n3->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[3] = ui->lineEdit_n4->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[4] = ui->lineEdit_n5->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[5] = ui->lineEdit_n6->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[6] = ui->lineEdit_n7->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[7] = ui->lineEdit_n8->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[8] = ui->lineEdit_n9->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[9] = ui->lineEdit_n10->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[10] = ui->lineEdit_n11->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[11] = ui->lineEdit_n12->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[12] = ui->lineEdit_n13->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[13] = ui->lineEdit_n14->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[14] = ui->lineEdit_n15->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[15] = ui->lineEdit_n16->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[16] = ui->lineEdit_n17->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[17] = ui->lineEdit_n18->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[18] = ui->lineEdit_n19->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[19] = ui->lineEdit_n20->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[20] = ui->lineEdit_n21->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[21] = ui->lineEdit_n22->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    };
    primerPosWtNonTar[22] = ui->lineEdit_n23->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    };
    primerPosWtNonTar[23] = ui->lineEdit_n24->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[24] = ui->lineEdit_n25->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[25] = ui->lineEdit_n26->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[26] = ui->lineEdit_n27->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[27] = ui->lineEdit_n28->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[28] = ui->lineEdit_n29->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    primerPosWtNonTar[29] = ui->lineEdit_n30->text().toInt(&b);
    if(!b){
        QMessageBox::about(this, "Error value","Please make sure you input valid number.");
        return false;
    }
    for( int i = 30; i < MAX_PRIMER_LEN; i++ )
        primerPosWtNonTar[i] = primerPosWtNonTar[29];

    return ((QWizardPage)this).validatePage();
}

void PrimerSettingSlctvtAdvIPage::onCurrentSetting()
{
    //this->setFinalPage(ui->radioButton_default->isChecked());

    if (this->nextId() == -1)
        setFinalPage(true);
    else
        setFinalPage(false);
}

void PrimerSettingSlctvtAdvIPage::onShowMtx()
{
    //this->setFinalPage(!ui->radioButton_showMtx->isChecked());

    if (this->nextId() == -1)
        setFinalPage(true);
    else
        setFinalPage(false);
}

void PrimerSettingSlctvtAdvIPage::onEditTar_1()
{
    QString strA, strB;
    strA = ui->lineEdit_1->text();
    strB = ui->lineEdit_2->text();

    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_2->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_2()
{
    QString strA, strB;
    strA = ui->lineEdit_2->text();
    strB = ui->lineEdit_3->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_3->setText(strA);

    strB = ui->lineEdit_1->text();
    A = strA.toInt(&b);
    B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_1->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_3()
{
    QString strA, strB;
    strA = ui->lineEdit_3->text();
    strB = ui->lineEdit_4->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_4->setText(strA);

    strB = ui->lineEdit_2->text();
    A = strA.toInt(&b);
    B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_2->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_4()
{
    QString strA, strB;
    strA = ui->lineEdit_4->text();
    strB = ui->lineEdit_5->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_5->setText(strA);

    strB = ui->lineEdit_3->text();
    A = strA.toInt(&b);
    B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_3->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_5()
{
    QString strA, strB;
    strA = ui->lineEdit_5->text();
    strB = ui->lineEdit_6->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_6->setText(strA);

    strB = ui->lineEdit_4->text();
    A = strA.toInt(&b);
    B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_4->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_6()
{
    QString strA, strB;
    strA = ui->lineEdit_6->text();
    strB = ui->lineEdit_7->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_7->setText(strA);

    strB = ui->lineEdit_5->text();
    A = strA.toInt(&b);
    B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_5->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_7()
{
    QString strA, strB;
    strA = ui->lineEdit_7->text();
    strB = ui->lineEdit_8->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_8->setText(strA);

    strB = ui->lineEdit_6->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_6->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_8()
{
    QString strA, strB;
    strA = ui->lineEdit_8->text();
    strB = ui->lineEdit_9->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_9->setText(strA);

    strB = ui->lineEdit_7->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_7->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_9()
{
    QString strA, strB;
    strA = ui->lineEdit_9->text();
    strB = ui->lineEdit_10->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_10->setText(strA);

    strB = ui->lineEdit_8->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_8->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_10()
{
    QString strA, strB;
    strA = ui->lineEdit_10->text();
    strB = ui->lineEdit_11->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_11->setText(strA);

    strB = ui->lineEdit_9->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_9->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_11()
{
    QString strA, strB;
    strA = ui->lineEdit_11->text();
    strB = ui->lineEdit_12->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_12->setText(strA);

    strB = ui->lineEdit_10->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_10->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_12()
{
    QString strA, strB;
    strA = ui->lineEdit_12->text();
    strB = ui->lineEdit_13->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_13->setText(strA);

    strB = ui->lineEdit_11->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_11->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_13()
{
    QString strA, strB;
    strA = ui->lineEdit_13->text();
    strB = ui->lineEdit_14->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_14->setText(strA);

    strB = ui->lineEdit_12->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_12->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_14()
{
    QString strA, strB;
    strA = ui->lineEdit_14->text();
    strB = ui->lineEdit_15->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_15->setText(strA);

    strB = ui->lineEdit_13->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_13->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_15()
{
    QString strA, strB;
    strA = ui->lineEdit_15->text();
    strB = ui->lineEdit_16->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_16->setText(strA);

    strB = ui->lineEdit_14->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_14->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_16()
{
    QString strA, strB;
    strA = ui->lineEdit_16->text();
    strB = ui->lineEdit_17->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_17->setText(strA);

    strB = ui->lineEdit_15->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_15->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_17()
{
    QString strA, strB;
    strA = ui->lineEdit_17->text();
    strB = ui->lineEdit_18->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_18->setText(strA);

    strB = ui->lineEdit_16->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_16->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_18()
{
    QString strA, strB;
    strA = ui->lineEdit_18->text();
    strB = ui->lineEdit_19->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_19->setText(strA);

    strB = ui->lineEdit_17->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_17->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_19()
{
    QString strA, strB;
    strA = ui->lineEdit_19->text();
    strB = ui->lineEdit_20->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_20->setText(strA);

    strB = ui->lineEdit_18->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_18->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_20()
{
    QString strA, strB;
    strA = ui->lineEdit_20->text();
    strB = ui->lineEdit_21->text();

    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_21->setText(strA);

    strB = ui->lineEdit_19->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_19->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_21()
{
    QString strA, strB;
    strA = ui->lineEdit_21->text();
    strB = ui->lineEdit_22->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_22->setText(strA);

    strB = ui->lineEdit_20->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_20->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_22()
{
    QString strA, strB;
    strA = ui->lineEdit_22->text();
    strB = ui->lineEdit_23->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_23->setText(strA);

    strB = ui->lineEdit_21->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_21->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_23()
{
    QString strA, strB;
    strA = ui->lineEdit_23->text();
    strB = ui->lineEdit_24->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_24->setText(strA);

    strB = ui->lineEdit_22->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_22->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_24()
{
    QString strA, strB;
    strA = ui->lineEdit_24->text();
    strB = ui->lineEdit_25->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_25->setText(strA);

    strB = ui->lineEdit_23->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_23->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_25()
{
    QString strA, strB;
    strA = ui->lineEdit_25->text();
    strB = ui->lineEdit_26->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_26->setText(strA);

    strB = ui->lineEdit_24->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_24->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_26()
{
    QString strA, strB;
    strA = ui->lineEdit_26->text();
    strB = ui->lineEdit_27->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_27->setText(strA);

    strB = ui->lineEdit_25->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_25->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_27()
{
    QString strA, strB;
    strA = ui->lineEdit_27->text();
    strB = ui->lineEdit_28->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_28->setText(strA);

    strB = ui->lineEdit_26->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_26->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_28()
{
    QString strA, strB;
    strA = ui->lineEdit_28->text();
    strB = ui->lineEdit_29->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_29->setText(strA);

    strB = ui->lineEdit_27->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_27->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_29()
{
    QString strA, strB;
    strA = ui->lineEdit_29->text();
    strB = ui->lineEdit_30->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_30->setText(strA);

    strB = ui->lineEdit_28->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_28->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditTar_30()
{
    QString strA, strB;
    strA = ui->lineEdit_30->text();
    strB = ui->lineEdit_29->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_29->setText(strA);
}

void PrimerSettingSlctvtAdvIPage::onEditNonTar_1()
{
    QString strA, strB;
    strA = ui->lineEdit_n1->text();
    strB = ui->lineEdit_n2->text();

    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n2->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_2()
{
    QString strA, strB;
    strA = ui->lineEdit_n2->text();
    strB = ui->lineEdit_n3->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n3->setText(strA);

    strB = ui->lineEdit_n1->text();
    A = strA.toInt(&b);
    B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n1->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_3()
{
    QString strA, strB;
    strA = ui->lineEdit_n3->text();
    strB = ui->lineEdit_n4->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n4->setText(strA);

    strB = ui->lineEdit_n2->text();
    A = strA.toInt(&b);
    B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n2->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_4()
{
    QString strA, strB;
    strA = ui->lineEdit_n4->text();
    strB = ui->lineEdit_n5->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n5->setText(strA);

    strB = ui->lineEdit_n3->text();
    A = strA.toInt(&b);
    B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n3->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_5()
{
    QString strA, strB;
    strA = ui->lineEdit_n5->text();
    strB = ui->lineEdit_n6->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n6->setText(strA);

    strB = ui->lineEdit_n4->text();
    A = strA.toInt(&b);
    B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n4->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_6()
{
    QString strA, strB;
    strA = ui->lineEdit_n6->text();
    strB = ui->lineEdit_n7->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n7->setText(strA);

    strB = ui->lineEdit_n5->text();
    A = strA.toInt(&b);
    B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n5->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_7()
{
    QString strA, strB;
    strA = ui->lineEdit_n7->text();
    strB = ui->lineEdit_n8->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n8->setText(strA);

    strB = ui->lineEdit_n6->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n6->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_8()
{
    QString strA, strB;
    strA = ui->lineEdit_n8->text();
    strB = ui->lineEdit_n9->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n9->setText(strA);

    strB = ui->lineEdit_n7->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n7->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_9()
{
    QString strA, strB;
    strA = ui->lineEdit_n9->text();
    strB = ui->lineEdit_n10->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n10->setText(strA);

    strB = ui->lineEdit_n8->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n8->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_10()
{
    QString strA, strB;
    strA = ui->lineEdit_n10->text();
    strB = ui->lineEdit_n11->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n11->setText(strA);

    strB = ui->lineEdit_n9->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n9->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_11()
{
    QString strA, strB;
    strA = ui->lineEdit_n11->text();
    strB = ui->lineEdit_n12->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n12->setText(strA);

    strB = ui->lineEdit_n10->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n10->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_12()
{
    QString strA, strB;
    strA = ui->lineEdit_n12->text();
    strB = ui->lineEdit_n13->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n13->setText(strA);

    strB = ui->lineEdit_n11->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n11->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_13()
{
    QString strA, strB;
    strA = ui->lineEdit_n13->text();
    strB = ui->lineEdit_n14->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n14->setText(strA);

    strB = ui->lineEdit_n12->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n12->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_14()
{
    QString strA, strB;
    strA = ui->lineEdit_n14->text();
    strB = ui->lineEdit_n15->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n15->setText(strA);

    strB = ui->lineEdit_n13->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n13->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_15()
{
    QString strA, strB;
    strA = ui->lineEdit_n15->text();
    strB = ui->lineEdit_n16->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n16->setText(strA);

    strB = ui->lineEdit_n14->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n14->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_16()
{
    QString strA, strB;
    strA = ui->lineEdit_n16->text();
    strB = ui->lineEdit_n17->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n17->setText(strA);

    strB = ui->lineEdit_n15->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n15->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_17()
{
    QString strA, strB;
    strA = ui->lineEdit_n17->text();
    strB = ui->lineEdit_n18->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n18->setText(strA);

    strB = ui->lineEdit_n16->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n16->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_18()
{
    QString strA, strB;
    strA = ui->lineEdit_n18->text();
    strB = ui->lineEdit_n19->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n19->setText(strA);

    strB = ui->lineEdit_n17->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n17->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_19()
{
    QString strA, strB;
    strA = ui->lineEdit_n19->text();
    strB = ui->lineEdit_n20->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n20->setText(strA);

    strB = ui->lineEdit_n18->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n18->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_20()
{
    QString strA, strB;
    strA = ui->lineEdit_n20->text();
    strB = ui->lineEdit_n21->text();

    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n21->setText(strA);

    strB = ui->lineEdit_n19->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n19->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_21()
{
    QString strA, strB;
    strA = ui->lineEdit_n21->text();
    strB = ui->lineEdit_n22->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n22->setText(strA);

    strB = ui->lineEdit_n20->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n20->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_22()
{
    QString strA, strB;
    strA = ui->lineEdit_n22->text();
    strB = ui->lineEdit_n23->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n23->setText(strA);

    strB = ui->lineEdit_n21->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n21->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_23()
{
    QString strA, strB;
    strA = ui->lineEdit_n23->text();
    strB = ui->lineEdit_n24->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n24->setText(strA);

    strB = ui->lineEdit_n22->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n22->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_24()
{
    QString strA, strB;
    strA = ui->lineEdit_n24->text();
    strB = ui->lineEdit_n25->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n25->setText(strA);

    strB = ui->lineEdit_n23->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n23->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_25()
{
    QString strA, strB;
    strA = ui->lineEdit_n25->text();
    strB = ui->lineEdit_n26->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n26->setText(strA);

    strB = ui->lineEdit_n24->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n24->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_26()
{
    QString strA, strB;
    strA = ui->lineEdit_n26->text();
    strB = ui->lineEdit_n27->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n27->setText(strA);

    strB = ui->lineEdit_n25->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n25->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_27()
{
    QString strA, strB;
    strA = ui->lineEdit_n27->text();
    strB = ui->lineEdit_n28->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n28->setText(strA);

    strB = ui->lineEdit_n26->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n26->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_28()
{
    QString strA, strB;
    strA = ui->lineEdit_n28->text();
    strB = ui->lineEdit_n29->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n29->setText(strA);

    strB = ui->lineEdit_n27->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n27->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_29()
{
    QString strA, strB;
    strA = ui->lineEdit_n29->text();
    strB = ui->lineEdit_n30->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( A > B )
        ui->lineEdit_n30->setText(strA);

    strB = ui->lineEdit_n28->text();
     A = strA.toInt(&b);
     B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n28->setText(strA);
}
void PrimerSettingSlctvtAdvIPage::onEditNonTar_30()
{
    QString strA, strB;
    strA = ui->lineEdit_n30->text();
    strB = ui->lineEdit_n29->text();
    bool b;
    int A = strA.toInt(&b);
    int B = strB.toInt(&b);
    if( strA.length() > 0 && A < B )
        ui->lineEdit_n29->setText(strA);
}
