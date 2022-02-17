#ifndef DYLATACJA_H
#define DYLATACJA_H

#include "operacje.h"

/*!
 * \brief Klasa odpowiedzialna za wykonanie dylatacji.
 */
class Dylatacja : public Operacje
{
public:
    /*!
     * \brief wykonaj_operacje Metoda odpowiedzialna za wykonanie dylatacji.
     * \return Obraz klasy cv::Mat bedacy kopia obrazu binarnego z wykonana operacja dylatacji.
     */
    cv::Mat wykonaj_operacje() override{

        cv::Mat rezultat = ObrazBinarny::obraz_cv.clone();
        cv::Mat const ksztalt = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));
        cv::morphologyEx(ObrazBinarny::obraz_cv, rezultat, cv::MORPH_DILATE, ksztalt);
        return rezultat;
    };

};

#endif // DYLATACJA_H
