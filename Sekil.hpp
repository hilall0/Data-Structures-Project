#ifndef SEKIL_HPP
#define SEKIL_HPP

#include <string>

// Global değişkenlerin beyanı (Tanımı Sekil.cpp dosyasında yapılacaktır)
extern char ekran[25][100];
// Sadece bildirim (declaration) yapıyoruz, tanımlama yapmıyoruz
extern int cizimXOffseti;

// Ekran temizleme fonksiyonunun beyanı
void ekraniTemizle(); 

class Sekil {
public:
    int x; // X konumu
    int y; // Y konumu
    int z; // Derinlik (Sıralama için)
    char cizimKarakteri; // Çizim karakteri (her nesne için rastgele)

    // Kurucu metotların prototipleri
    Sekil(); // Varsayılan kurucu
    Sekil(int x, int y, int z); // Parametreli kurucu (Türemiş sınıflar için zorunlu)

    // Saf Sanal Metotlar
    virtual void ciz() = 0;
    virtual void hareket(int dx, int dy) = 0;
    virtual bool konumGecerliMi(int x, int y) = 0;
    
    // Sanal Yıkıcı
    virtual ~Sekil() = default; 
};

#endif // SEKIL_HPP