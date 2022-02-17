#ifndef DOMKNIECIE_H
#define DOMKNIECIE_H

#include "operacje.h"

/*!
 * \brief Klasa odpowiedzialna za wykonanie operacji domkniecia.
 */
class Domkniecie : public Operacje
{
public:
    /*!
     * \brief wykonaj_operacje Metoda odpowiedzialna za wykonanie domkniecia.
     * \return Obraz klasy cv::Mat bedacy kopia obrazu binarnego z wykonana operacja domkniecia.
     */
    cv::Mat wykonaj_operacje() override{

        cv::Mat rezultat = ObrazBinarny::obraz_cv.clone();
        cv::Mat const ksztalt = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));
        cv::morphologyEx(ObrazBinarny::obraz_cv, rezultat, cv::MORPH_CLOSE, ksztalt);
        return rezultat;
    };
};

#endif // DOMKNIECIE_H
