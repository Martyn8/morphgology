#ifndef MORFOLOGIA_H
#define MORFOLOGIA_H

#include <QMainWindow>
#include <QFileDialog>

#include <opencv2/opencv.hpp>
#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include "obraz.h"
#include "operacje.h"
#include "dylatacja.h"
#include"erozja.h"
#include"otwarcie.h"
#include"domkniecie.h"
#include"top_hat.h"
#include"bottom_hat.h"
#include "obrazoryginalny.h"
#include "obrazbinarny.h"
#include "obrazprzetworzony.h"
#include <windows.h>
#include <chrono>
#include <thread>

QT_BEGIN_NAMESPACE
namespace Ui { class Morfologia; }
QT_END_NAMESPACE

/*!
 * \brief Klasa glowna odpowiadajaca za interfejs uzytkownika i komunikacje z nim oraz przyciski.
 */
class Morfologia : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * \brief Konstruktor klasy Morfologia.
     */
    Morfologia(QWidget *parent = nullptr);
    /*!
    \brief Destruktor klasy Morfologia.
    */
    ~Morfologia();


private slots:
    /*!
     * \brief Aktywowanie przycisku "Otworz" uruchomi eksplorator plikow co umozliwi wybranie obrazu.
     */
    void on_actionOtworz_triggered();
    /*!
     * \brief Klikniecie spowoduje wykonanie operacji dylatacji.
     */
    void on_Dylatacja_clicked();
    /*!
     * \brief Klikniecie spowoduje wykonanie operacji erozji.
     */
    void on_Erozja_clicked();
    /*!
     * \brief Klikniecie spowoduje wykonanie operacji otwarcia.
     */
    void on_Otwarcie_clicked();
    /*!
     * \brief Klikniecie spowoduje wykonanie operacji domkniecia.
     */
    void on_Domkniecie_clicked();
    /*!
     * \brief Klikniecie spowoduje wykonanie operacji top-hat.
     */
    void on_TopHat_clicked();
    /*!
     * \brief Klikniecie spowoduje wykonanie operacji bottom-hat.
     */
    void on_BottomHat_clicked();
    /*!
     * \brief Klikniecie spowoduje usuniecie przetworzonego obrazu, co umozliwi wykonywanie operacji od nowa.
     */
    void on_Reset_clicked();

private:
    /*!
     * \brief ui Wskaznik na interfejs uzytkownika.
     */
    Ui::Morfologia *ui;
};
/*!
  \brief Funkcja anonimowa wypisujaca zadany tekst na etykiete i ustawiajaca tekst na jej srodku.
  \param *&label Etykieta, ktora wyswietli tekkst.
  \param tekst Tekst, ktory zostanie wypisany na etykiecie.
*/
auto wypisz = [](QLabel *&label, QString tekst)->void{
    label->setText(tekst);
    label->setAlignment(Qt::AlignCenter);
};

#endif // MORFOLOGIA_H
