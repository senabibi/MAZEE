#ifndef KONUM_HPP
#define KONUM_HPP

typedef enum{ASAGI,SOL,YUKARI,SAG}Yon;

struct Konum{
    int x,y;
    Yon Yon;
    Konum(int,int,Yon);
    Konum(int,int);
    Konum();
    Konum AyniYon();
    Konum SaatYonu(Yon);
    Konum Asagi();
    Konum Yukari();
    Konum Sol();
    Konum TersYon();
    Konum Sag();


};
#endif