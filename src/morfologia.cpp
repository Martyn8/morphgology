#include "morfologia.h"
#include "ui_morfologia.h"


Morfologia::Morfologia(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Morfologia)
{
    ui->setupUi(this);
}

Morfologia::~Morfologia()
{
    delete ui;
}

QImage Obraz::obraz_qt;
cv::Mat Obraz::obraz_cv;
cv::Mat ObrazBinarny::obraz_szary;

void Morfologia::on_actionOtworz_triggered()
{
    ObrazOryginalny obraz_oryginalny;
    Obraz obraz;
    obraz_oryginalny.nazwa_qt = QFileDialog::getOpenFileName(this, tr("Otworz Obraz"), "", tr("Obraz (*.png *.jpg *.jpeg)"));
    obraz_oryginalny.nazwa_std = obraz_oryginalny.nazwa_qt.toStdString();

    if (ObrazOryginalny::obraz_qt.isNull() == false)
        ui->labelPrzetworzony->clear();

    if (QString::compare(obraz_oryginalny.nazwa_qt, QString()) != 0)
    {
        try {
            if (ObrazOryginalny::obraz_qt.load(obraz_oryginalny.nazwa_qt) == false)
            {
                QString wyjatek = "Nie udalo sie zaladowac obrazu";
                throw wyjatek;
            }
            else
            {
                obraz.wyskaluj(ObrazOryginalny::obraz_qt, ui->labelOryginal);
                ui->labelOryginal->setPixmap(QPixmap::fromImage(obraz_oryginalny.wyskaluj(ObrazOryginalny::obraz_qt, ui->labelOryginal)));
                ui->labelOryginal->setAlignment(Qt::AlignCenter);
                QString tekst = "Obraz został załadowany poprawnie";
                wypisz(ui->labelNapis, tekst);
            }
        } catch (QString wyj) {
            wypisz(ui->labelNapis, wyj);
        }

        ObrazBinarny::obraz_szary = cv::imread(obraz_oryginalny.nazwa_std, cv::IMREAD_GRAYSCALE);
        cv::threshold(ObrazBinarny::obraz_szary, ObrazBinarny::obraz_cv, 127,255, cv::THRESH_BINARY_INV);

        ObrazBinarny::obraz_qt = obraz.cvmat_do_qimage(ObrazBinarny::obraz_cv, QImage::Format_Grayscale8);
        ui->labelBinarny->setPixmap(QPixmap::fromImage(obraz.wyskaluj(ObrazBinarny::obraz_qt, ui->labelBinarny)));
        ui->labelBinarny->setAlignment(Qt::AlignCenter);
    }
}

void Morfologia::on_Dylatacja_clicked(){
    if (ObrazOryginalny::obraz_qt.isNull())
        return;
    ObrazPrzetworzony obraz_przetworzony;
    Operacje *operacja;
    Dylatacja dylatacja;
    Obraz obraz;
    operacja = &dylatacja;
    obraz_przetworzony.obraz_cv = operacja->wykonaj_operacje();
    obraz_przetworzony.obraz_qt = obraz.cvmat_do_qimage(obraz_przetworzony.obraz_cv, QImage::Format_Grayscale8);
    ui->labelPrzetworzony->setPixmap(QPixmap::fromImage(obraz.wyskaluj(obraz_przetworzony.obraz_qt, ui->labelBinarny)));

    if (ObrazBinarny::obraz_qt.isNull())
    {
        QString tekst = "Nie udalo sie wykonac operacji";
        wypisz(ui->labelNapis, tekst);
        return;
    }
    else
    {
        QString tekst = "Operacja wykonana pomyślnie";
        wypisz(ui->labelNapis, tekst);
    }
}

void Morfologia::on_Erozja_clicked(){
    if (ObrazOryginalny::obraz_qt.isNull())
        return;
    ObrazPrzetworzony obraz_przetworzony;
    Operacje *operacja;
    Erozja erozja;
    Obraz obraz;
    operacja = &erozja;
    obraz_przetworzony.obraz_cv = operacja->wykonaj_operacje();
    obraz_przetworzony.obraz_qt = obraz.cvmat_do_qimage(obraz_przetworzony.obraz_cv, QImage::Format_Grayscale8);
    ui->labelPrzetworzony->setPixmap(QPixmap::fromImage(obraz.wyskaluj(obraz_przetworzony.obraz_qt, ui->labelBinarny)));

    if (ObrazPrzetworzony::obraz_qt.isNull())
    {
        QString tekst = "Nie udalo sie wykonac operacji";
        wypisz(ui->labelNapis, tekst);
        return;
    }
    else
    {
        QString tekst = "Operacja wykonana pomyślnie";
        wypisz(ui->labelNapis, tekst);
    }
}

void Morfologia::on_Otwarcie_clicked(){
    if (ObrazOryginalny::obraz_qt.isNull())
        return;
    ObrazPrzetworzony obraz_przetworzony;
    Operacje *operacja;
    Otwarcie otwarcie;
    Obraz obraz;
    operacja = &otwarcie;
    obraz_przetworzony.obraz_cv = operacja->wykonaj_operacje();
    obraz_przetworzony.obraz_qt = obraz.cvmat_do_qimage(obraz_przetworzony.obraz_cv, QImage::Format_Grayscale8);
    ui->labelPrzetworzony->setPixmap(QPixmap::fromImage(obraz.wyskaluj(obraz_przetworzony.obraz_qt, ui->labelBinarny)));

    if (ObrazPrzetworzony::obraz_qt.isNull())
    {
        QString tekst = "Nie udalo sie wykonac operacji";
        wypisz(ui->labelNapis, tekst);
        return;
    }
    else
    {
        QString tekst = "Operacja wykonana pomyślnie";
        wypisz(ui->labelNapis, tekst);
    }
}

void Morfologia::on_Domkniecie_clicked(){
    if (ObrazOryginalny::obraz_qt.isNull())
        return;
    ObrazPrzetworzony obraz_przetworzony;
    Operacje *operacja;
    Domkniecie domkniecie;
    Obraz obraz;
    operacja = &domkniecie;
    obraz_przetworzony.obraz_cv = operacja->wykonaj_operacje();
    obraz_przetworzony.obraz_qt = obraz.cvmat_do_qimage(obraz_przetworzony.obraz_cv, QImage::Format_Grayscale8);
    ui->labelPrzetworzony->setPixmap(QPixmap::fromImage(obraz.wyskaluj(obraz_przetworzony.obraz_qt, ui->labelBinarny)));

    if (ObrazPrzetworzony::obraz_qt.isNull())
    {
        QString tekst = "Nie udalo sie wykonac operacji";
        wypisz(ui->labelNapis, tekst);
        return;
    }
    else
    {
        QString tekst = "Operacja wykonana pomyślnie";
        wypisz(ui->labelNapis, tekst);
    }
}

void Morfologia::on_TopHat_clicked(){
    if (ObrazOryginalny::obraz_qt.isNull())
        return;
    ObrazPrzetworzony obraz_przetworzony;
    Operacje *operacja;
    Top_Hat top_hat;
    Obraz obraz;
    operacja = &top_hat;
    obraz_przetworzony.obraz_cv = operacja->wykonaj_operacje();
    obraz_przetworzony.obraz_qt = obraz.cvmat_do_qimage(obraz_przetworzony.obraz_cv, QImage::Format_Grayscale8);
    ui->labelPrzetworzony->setPixmap(QPixmap::fromImage(obraz.wyskaluj(obraz_przetworzony.obraz_qt, ui->labelBinarny)));

    if (ObrazPrzetworzony::obraz_qt.isNull())
    {
        QString tekst = "Nie udalo sie wykonac operacji";
        wypisz(ui->labelNapis, tekst);
        return;
    }
    else
    {
        QString tekst = "Operacja wykonana pomyślnie";
        wypisz(ui->labelNapis, tekst);
    }
}

void Morfologia::on_BottomHat_clicked(){
    if (ObrazOryginalny::obraz_qt.isNull())
        return;
    ObrazPrzetworzony obraz_przetworzony;
    Operacje *operacja;
    Bottom_Hat bottom_hat;
    Obraz obraz;
    operacja = &bottom_hat;
    obraz_przetworzony.obraz_cv = operacja->wykonaj_operacje();
    obraz_przetworzony.obraz_qt = obraz.cvmat_do_qimage(obraz_przetworzony.obraz_cv, QImage::Format_Grayscale8);
    ui->labelPrzetworzony->setPixmap(QPixmap::fromImage(obraz.wyskaluj(obraz_przetworzony.obraz_qt, ui->labelBinarny)));

    if (ObrazPrzetworzony::obraz_qt.isNull())
    {
        QString tekst = "Nie udalo sie wykonac operacji";
        wypisz(ui->labelNapis, tekst);
        return;
    }
    else
    {
        QString tekst = "Operacja wykonana pomyślnie";
        wypisz(ui->labelNapis, tekst);
    }
}

void Morfologia::on_Reset_clicked()
{
    if ((ObrazOryginalny::obraz_qt.isNull() == false)&&(ui->labelPrzetworzony->pixmap()))
    {
        ui->labelPrzetworzony->clear();
        cv::threshold(ObrazBinarny::obraz_szary, ObrazBinarny::obraz_cv, 127,255, cv::THRESH_BINARY_INV);
        QString tekst = "Przetwarzanie obrazu zostało zresetowane. Ponownie wybierz operację.";
        wypisz(ui->labelNapis, tekst);
    }
    else return;
}
