#ifndef OTWARCIE_H
#define OTWARCIE_H

#include "operacje.h"

/*!
 * \brief Klasa odpowiedzialna za wykonywanie operacji otwarcia.
 */
class Otwarcie : public Operacje
{
public:
    /*!
     * \brief Metoda odpowiedzialna za wykonanie otwarcia.
     * \return Obraz klasy cv::Mat bedacy kopia obrazu binarnego z wykonana operacja otwarcia.
     */
    cv::Mat wykonaj_operacje() override{

        cv::Mat rezultat = ObrazBinarny::obraz_cv.clone();
        cv::Mat const ksztalt = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));
        cv::morphologyEx(ObrazBinarny::obraz_cv, rezultat, cv::MORPH_OPEN, ksztalt);
        return rezultat;
    };
};

#endif // OTWARCIE_H
