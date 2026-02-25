#include "../include/Ucgen.hpp"
#include <iostream> 

extern char ekran[25][100];

Ucgen::Ucgen(int yukseklik, int x, int y, int z):Sekil(){
                this->yukseklik=yukseklik;
                this->x=x;
                this->y=y;
                this->z=z;
            }

void Ucgen::ciz() {
    for (int i=0;i<yukseklik;i++){
        for (int j=0;j<2*i+1;j++){
            if(y+i>=0 && y+i<25 && x-i+cizimXOffseti+j>=0 && x-i+cizimXOffseti+j<100)
                ekran[y+i][x-i+cizimXOffseti+j]=cizimKarakteri;
        }
    }
}

bool Ucgen::konumGecerliMi(int x_, int y_) {
    if(y_+yukseklik>24) return false;
    if(y_<1) return false;
    if(x_+cizimXOffseti+(yukseklik-1)>95) return false;
    if(x_-(yukseklik-1)<25) return false;
    return true;
}

void Ucgen::hareket(int dx, int dy) {
    int X = x + dx;
    int Y = y + dy;
    if (konumGecerliMi(X, Y)) {
        x = X; y = Y;
    }
}
