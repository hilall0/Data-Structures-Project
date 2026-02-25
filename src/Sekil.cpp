#include "../include/Sekil.hpp"
#include <cstdlib> 
#include <time.h>  

using namespace std;

char ekran[25][100]; 
int cizimXOffseti = 20;

void ekraniTemizle() {
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 100; j++) {
            ekran[i][j] = ' ';
        }
    }
}


Sekil::Sekil() {
    x = y = z = 0;
    char karakterler[7] = {'0','*','+','-','%','&','#'};
    cizimKarakteri = karakterler[rand() % 7];
}

Sekil::Sekil(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
    char karakterler[7] = {'0','*','+','-','%','&','#'};
    this->cizimKarakteri = karakterler[rand() % 7];
}
