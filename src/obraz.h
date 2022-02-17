#ifndef OBRAZ_H
#define OBRAZ_H

#include <QString>
#include <QImage>
#include <QLabel>
#include <opencv2/opencv.hpp>

/*!
 * \brief Klasa bazowa odpowiadajaca za obrazy.
 */
class Obraz
{
public:
    /*!
     * \brief Obraz typu QImage.
     */
    static QImage obraz_qt;
    /*!
     * \brief Obraz typu cv::Mat.
     */
    static cv::Mat obraz_cv;

/*!
*\brief Metoda odpowiedzialna za skalowanie obrazu do wymiarow danej etykiety.
*\param obraz Obraz podlegajacy skalowaniu.
*\param *&label Etykieta, wedlug ktorej skalowany jest obraz.
*\return Obraz dopasowany do wymiarow etykiety podanej jako parametr.
*/
    template <typename typ1, typename typ2>
    QImage wyskaluj(typ1 obraz, typ2 *&label);

    /*!
     * \brief Metoda konwertujaca obraz typu cv::Mat do obrazu typu QImage.
     * \param obraz Obraz podlegajacy konwersji.
     * \param format Format danych zwroconego obrazu po konwersji wymagany do jej przeprowadzenia.
     * \return Obraz przekonwertowany na typ QImage wykonany na kopii obrazu podanego jako parametr.
     */
    QImage cvmat_do_qimage(cv::Mat const &obraz, QImage::Format format);
};

#endif // OBRAZ_H
