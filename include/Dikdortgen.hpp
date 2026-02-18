#ifndef DIKDORTGEN_HPP
#define DIKDORTGEN_HPP

#include "Sekil.hpp"

class Dikdortgen : public Sekil {
private:
    int yukseklik;
    int genislik;
public:
    Dikdortgen(int yukseklik, int genislik, int x, int y, int z);
    void ciz() override;
    void hareket(int dx, int dy) override;
    bool konumGecerliMi(int x, int y) override;
};

#endif 
