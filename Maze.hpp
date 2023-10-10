#ifndef LABIRENT_HPP
#define LABIRENT_HPP

#include<fstream>
#include<iomanip>
#include "Windows.h"
#include<sstream>
#include "Location.hpp"
#include "Stack.hpp"
#define YUKSEKLIK 20
#define GENISLIK 50

class Labirent{
    public:
    char harita[YUKSEKLIK][GENISLIK];
    int x,y;
    Yon yon;
    Konum bitis;
    Stack<KonumZ *sena;
    Labirent(Konum,Konum);
    Konum mevcutK();
    bool adimat(Konum,Konum);
    void ayarla(Konum,Yon);
    bool Cikisageldimi();
    bool engelvarmi(Konum);
    string yaz();
};
#endif