#include "Maze.hpp" 
int main(){
    Labirent *labirent=new Labirent(Konum(0,20),Konum(19,11));
    labirent->sena->push(Konum(labirent->x,labirent->y;ASAGI));
    labirent->ayarla(Konum(labirent->x,labirent->y,ASAGI),Asagi(),ASAGI);
    while(!labirent->Cikisagel()){
        int denemeyonsayisi=1;
        Konum oncekiK=labirent->sena->top();
        Konum mevcutK=labirent->mevcutkonum();
        Konum ileri=mevcutKonum.AyniYon();
        if(!labirent->adimAt(mevcutKonum,ileri)){
            int i=0;
            bool sonuc=false;
            Konum yeni=mevcutKonum;
            while(!sonuc && denemeyonsayisi<5){
                yeni=mevcutKonum.SaatYonu((Yon)((mevcutKonum.yon+i)%4));
                i++;
                denemeyonsayisi++;
                if(yeni.yon==mevcutK.TersYon()){
                    sonuc=false;
                }
                else{
                    sonuc=labirent->adimat(mevcutK,yeni);
                }
                if(denemeyonsayisi==5){
                    labirent->sena->pop();
                    labirent->ayarla(oncekiK,oncekiK.TersYon());
                }
            }
           }
cout<<"CIKIS"<<endl;
getchar();
delete labirent;
return 0;
    }
