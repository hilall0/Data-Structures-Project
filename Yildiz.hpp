#ifndef YILDIZ_HPP
#define YILDIZ_HPP

#include "Sekil.hpp"

class Yildiz : public Sekil {
private:
    int yukseklik;
    int ustUcgenYuksekligi;
    int altUcgenYuksekligi;
    int genislik;
public:
    Yildiz(int yukseklik, int x, int y, int z);
    void ciz() override;
    void hareket(int dx, int dy) override;
    bool konumGecerliMi(int x, int y) override;
};

#endif 
