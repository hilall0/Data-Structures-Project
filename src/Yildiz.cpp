#include "../include/Yildiz.hpp"
extern char ekran[25][100];

Yildiz::Yildiz(int yukseklik, int x, int y, int z):Sekil(){
            this->yukseklik=yukseklik;
            this->x=x;
            this->y=y;
            this->z=z;
            this->ustUcgenYuksekligi = (yukseklik+1)/2;
            this->altUcgenYuksekligi = yukseklik - ustUcgenYuksekligi;
            this->genislik = 2*ustUcgenYuksekligi-1;
        }

void Yildiz::ciz() {
    for(int i=0;i<ustUcgenYuksekligi;i++){
        for(int j=0;j<2*i+1;j++){
            if(y+i>=0 && y+i<25 && x-i+cizimXOffseti+j>=0 && x-i+cizimXOffseti+j<100)
                ekran[y+i][x-i+cizimXOffseti+j]=cizimKarakteri;
        }
    }
    for(int i=0;i<altUcgenYuksekligi;i++){
        int karakterSayisi = (genislik-2*i);
        for(int j=0;j<karakterSayisi;j++){
            if(y+ustUcgenYuksekligi+i>=0 && y+ustUcgenYuksekligi+i<24 && x-(karakterSayisi-1)/2+cizimXOffseti+j>=0 && x-(karakterSayisi-1)/2+cizimXOffseti+j<100)
                ekran[y+ustUcgenYuksekligi+i][x-(karakterSayisi-1)/2+cizimXOffseti+j]=cizimKarakteri;
        }
    }
}

bool Yildiz::konumGecerliMi(int x_, int y_) {
    if(y_ + yukseklik>24) return false;
    if(y_<1) return false;
    if(x_+cizimXOffseti+genislik/2>95) return false;
    if(x_-genislik/2<25) return false;
    return true;
}

void Yildiz::hareket(int dx, int dy) {
    int X = x + dx; int Y = y + dy;
    if(konumGecerliMi(X,Y)) { x = X; y = Y; }
}
