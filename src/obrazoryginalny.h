#ifndef OBRAZORYGINALNY_H
#define OBRAZORYGINALNY_H

#include "obraz.h"

/*!
 * \brief Klasa potomna klasy Obraz odpowiedzialna za obraz oryginalny.
 */
class ObrazOryginalny : public Obraz
{
public:
    /*!
      * \brief Nazwa typu string wybranego pliku graficznego.
      */
     std::string nazwa_std;
     /*!
      * \brief Nazwa typu QString wybranego pliku graficznego.
      */
     QString nazwa_qt;
};

#endif // OBRAZORYGINALNY_H
