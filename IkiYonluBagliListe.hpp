#ifndef IKIYONLU_HPP
#define IKIYONLU_HPP

#include "TekYonluBagliListe.hpp"

struct IkiYonluBagliDugum {
    TekYonluBagliListe* veri;
    IkiYonluBagliDugum* onceki;
    IkiYonluBagliDugum* sonraki;
    IkiYonluBagliDugum(TekYonluBagliListe* v);
};

class IkiYonluBagliListe {
public:
    IkiYonluBagliListe();
    ~IkiYonluBagliListe();
    int uzunlukAl() const;
    IkiYonluBagliDugum* ikiYonluBagliDugumGetir(int indeks);
    void ekle(int indeks, TekYonluBagliListe* veri);
    void sil(int indeks);
private:
    IkiYonluBagliDugum* ikiYonluIlk;
    int uzunluk;
};

#endif 
