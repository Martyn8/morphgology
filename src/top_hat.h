#ifndef TOP_HAT_H
#define TOP_HAT_H

#include "operacje.h"

/*!
 * Klasa odpowiedzialna za wykonywanie operacji top-hat.
 */
class Top_Hat : public Operacje
{
public:
    /*!
     * \brief Metoda odpowiedzialna za wykonanie operacji morfologicznej top-hat.
     * \return Obraz klasy cv::Mat bedacy kopia obrazu binarnego z wykonana operacja top-hat.
     */
    cv::Mat wykonaj_operacje() override{

        cv::Mat rezultat = ObrazBinarny::obraz_cv.clone();
        cv::Mat const ksztalt = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));
        cv::morphologyEx(ObrazBinarny::obraz_cv, rezultat, cv::MORPH_TOPHAT, ksztalt);
        return rezultat;
    };
};

#endif // TOP_HAT_H
