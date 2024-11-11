#pragma once

#include "Stocznia.hpp"
#include <iostream>

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    if (towar == 0)
    return 0;

    else
    {
        int przetransportowany=0;
        int liczba_zaglowcow=0;
        
    while (przetransportowany < towar) 
    {
        Stocznia stocznia;
        Statek* statek1 = stocznia();

        przetransportowany += statek1 -> transportuj();
        if (dynamic_cast < Zaglowiec*>(statek1))
        {
            liczba_zaglowcow++;
        }
        delete statek1;
    }
    return liczba_zaglowcow;
    }
}