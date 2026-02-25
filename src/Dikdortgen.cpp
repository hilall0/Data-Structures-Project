#include "../include/Dikdortgen.hpp"
extern char ekran[25][100];

Dikdortgen::Dikdortgen(int yukseklik, int genislik, int x, int y, int z):Sekil(){
                this->yukseklik=yukseklik;
                this->genislik=genislik;
                this->x=x;
                this->y=y;
                this->z=z;
            }
void Dikdortgen::ciz() {
    for (int i=0;i<yukseklik;i++){
        for (int j=0;j<genislik;j++){
            if(y+i>=0 && y+i<25 && x+cizimXOffseti+j>=0 && x+cizimXOffseti+j<100)
                ekran[y+i][x+cizimXOffseti+j]=cizimKarakteri;
        }
    }
}

bool Dikdortgen::konumGecerliMi(int x_, int y_) {
    if(x_<cizimXOffseti) return false;
    if(x_+cizimXOffseti+genislik>95) return false;
    if(y_<1) return false;
    if(y_+yukseklik>24) return false;
    return true;
}

void Dikdortgen::hareket(int dx,int dy) {
    int X = x + dx;
    int Y = y + dy;
    if(konumGecerliMi(X,Y)){
        x=X; y=Y;
    }
}
