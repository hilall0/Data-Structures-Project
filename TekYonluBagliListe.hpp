#ifndef TEKYONLU_HPP
#define TEKYONLU_HPP

#include "Sekil.hpp"

struct TekYonluBagliDugum {
    Sekil* veri;
    TekYonluBagliDugum* sonraki;
    TekYonluBagliDugum(Sekil* v);
};

class TekYonluBagliListe {
public:
    TekYonluBagliListe();
    ~TekYonluBagliListe();
    int uzunlukAl() const;
    TekYonluBagliDugum* tekYonluBagliDugumGetir(int indeks);
    void ekle(int indeks, Sekil* veri);
    void sil(int indeks);
private:
    TekYonluBagliDugum* tekYonluIlk;
    int uzunluk;
    // (ekstra yardımcı fonksiyonlar prototipi burada olabilir)
};

#endif // TEKYONLU_HPP
