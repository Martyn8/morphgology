#ifndef OPERACJE_H
#define OPERACJE_H

#include <opencv2/opencv.hpp>
#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <QImage>
#include <QLabel>
#include "obrazbinarny.h"

/*!
 * \brief Klasa abstrakcyjna odpowiedzialna za wykonywanie operacji.
 * \see Dylatacja Erozja Otwarcie Domkniecie Bottom_Hat Top_Hat
 */
class Operacje
{
public:
    /*!
     * \brief Metoda wirtualna wykonujaca operacje morfologiczna.
     * \return Obraz klasy cv::Mat bedacy kopia obrazu binarnego z wykonana operacja morfologiczna.
     */
    virtual cv::Mat wykonaj_operacje(){};
};


#endif // OPERACJE_H
