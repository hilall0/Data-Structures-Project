#ifndef UCGEN_HPP
#define UCGEN_HPP

#include "Sekil.hpp"

class Ucgen : public Sekil {
private:
    int yukseklik;
public:
    Ucgen(int yukseklik, int x, int y, int z);
    void ciz() override;
    void hareket(int dx, int dy) override;
    bool konumGecerliMi(int x, int y) override;
};

#endif 
