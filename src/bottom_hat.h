#ifndef BOTTOM_HAT_H
#define BOTTOM_HAT_H

#include "operacje.h"

/*!
 * \brief Klasa odpowiedzialna za wykonanie operacji bottom-hat.
 */
class Bottom_Hat : public Operacje
{
public:
    /*!
     * \brief wykonaj_operacje Metoda odpowiedzialna za wykonanie operacji morfologicznej bottom-hat.
     * \return Obraz klasy cv::Mat bedacy kopia obrazu binarnego z wykonana operacja bottom-hat.
     */
    cv::Mat wykonaj_operacje() override{

        cv::Mat rezultat = ObrazBinarny::obraz_cv.clone();
        cv::Mat const ksztalt = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));
        cv::morphologyEx(ObrazBinarny::obraz_cv, rezultat, cv::MORPH_BLACKHAT, ksztalt);
        return rezultat;
    };
};

#endif // BOTTOM_HAT_H
