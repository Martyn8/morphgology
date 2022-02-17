#ifndef OBRAZBINARNY_H
#define OBRAZBINARNY_H

#include "obraz.h"

/*!
 * \brief Klasa potomna klasy Obraz odpowiedzialna za obraz binarny.
 */
class ObrazBinarny : public Obraz
{
public:
    ObrazBinarny();
    /*!
      * \brief Obraz w skali szarosci typu cv::Mat.
      */
     static cv::Mat obraz_szary;
};

#endif // OBRAZBINARNY_H
