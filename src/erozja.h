#ifndef EROZJA_H
#define EROZJA_H

#include "operacje.h"

/*!
 * \brief Klasa odpowiedzialna za wykonanie operacji erozji.
 */
class Erozja : public Operacje
{
public:
    /*!
     * \brief wykonaj_operacje Metoda odpowiedzialna za wykonanie erozji.
     * \return Obraz klasy cv::Mat bedacy kopia obrazu binarnego z wykonana operacja erozji.
     */
    cv::Mat wykonaj_operacje() override{

        cv::Mat rezultat = ObrazBinarny::obraz_cv.clone();
        cv::Mat const ksztalt = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));
        cv::morphologyEx(ObrazBinarny::obraz_cv, rezultat, cv::MORPH_ERODE, ksztalt);
        return rezultat;
    };
};

#endif // EROZJA_H
