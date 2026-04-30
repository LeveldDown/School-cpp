/*büyük programlar yazarken tüm kodu tek bir dosyada 
tutmak yerine birden fazla dosyaya bölmek için:

header (.h): sınıf tanımları
kaynak (.cpp): fonksiyon kodları
main.cpp: programın çalıştığı ana bölüm

!!-> yalnızca bir tane main() fonksiyonu bulunabilir.

#ifndef -> if not define (tanımlı değilse tanımla demek oluyor.)
*/

//Siparis.h kısmı:
/*
#ifndef SIPARIS_H
#define SIPARIS_H
#include <iostream>
using namespace std;

class Siparis{
    private:
    int siparisNo;
    string musteriAdi;
    string urunAdi;
    int adet;
    double birimFiyat;
    
    public:
    Siparis(int no, string musteri, string urun, int a, double fiyat);
    double toplamTutarHesapla();
    void siparisYazdir();
};

#endif
*/
//Siparis.cpp kısmı: 
/*
#include "Siparis.h"
#include <iostream>
using namespace std;

Siparis::Siparis(int no, string musteri, string urun, int a, double fiyat){
    siparisNo = no;
    musteriAdi = musteri;
    urunAdi = urun;
    adet = a;
    birimFiyat = fiyat;
}

double Siparis::toplamTutarHesapla(){
    return adet*birimFiyat;
}

void Siparis::siparisYazdir(){
    cout<<"Sipariş No: "<<siparisNo<<endl;
    cout<<"Müşteri Adı: "<<musteriAdi<<endl;
    cout<<"Ürün Adı: "<<urunAdi<<endl;
    cout<<"Adet: "<<adet<<endl;
    cout<<"Birim Fiyat: "<<birimFiyat<<endl;
    cout<<"Toplam Tutar: "<<toplamTutarHesapla()<<endl;
}
*/
//main.cpp kısmı:
/*
#include <iostream>
#include "Siparis.h"
using namespace std;

int main(){
    Siparis siparis1(101,"Veli","Çorba",2,120);
    
    siparis1.siparisYazdir();
}
*/
//2. Soru
//Ev.h kısmı:
/*
#ifndef EV_H
#define EV_H
#include <iostream>
using namespace std;

class Ev{
    private:
    int odaSayisi;
    int metrekare;
    bool bahceliMi;
    
    public:
    Ev(int oda, int metre, bool bahce);
    Ev();
    
    void setOdaSayisi(int odaSayisi);
    int getOdaSayisi();
    
    void setMetrekare(int metrekare);
    int getMetrekare();
    
    void setBahceliMi(bool bahceliMi);
    bool getBahceliMi();
    
    int kiraHesapla();
};
#endif
*/
//Ev.cpp kısmı:
/*
#include "Ev.h"
#include <iostream>
using namespace std;

Ev::Ev(int oda, int metre, bool bahce){
    odaSayisi = oda;
    metrekare = metre;
    bahceliMi = bahce;
}

Ev::Ev(){
    odaSayisi = 0;
    metrekare = 0;
    bahceliMi = false;
}

void Ev::setOdaSayisi(int odaSayisi){
    this->odaSayisi = odaSayisi;
}
void Ev::setMetrekare(int metrekare){
    this->metrekare = metrekare;
}
void Ev::setBahceliMi(bool bahceliMi){
    this->bahceliMi = bahceliMi;
}

int Ev::getOdaSayisi(){
    return odaSayisi;
}
int Ev::getMetrekare(){
    return metrekare;
}
bool Ev::getBahceliMi(){
    return bahceliMi;
}

int Ev::kiraHesapla(){
    int kira = (odaSayisi*6000)+(metrekare*240);
    if (bahceliMi == true){
        kira+=10000;
    }
    return kira;
}
*/
//main.cpp kısmı:
/*
#include <iostream>
#include "Ev.h"
using namespace std;

int main(){
    Ev ev1(3,120,true);
    cout<<"1. Evin Bilgileri:"<<endl;
    cout<<"Oda Sayısı: "<<ev1.getOdaSayisi()<<endl;
    cout<<"Metrekare: "<<ev1.getMetrekare()<<endl;
    cout<<"Bahçeli Mi: "<<ev1.getBahceliMi()<<endl;
    cout<<"Kira: "<<ev1.kiraHesapla()<<"TL"<<endl;
    
    cout<<"----------------------"<<endl;
    
    Ev ev2(2,90,false);
    cout<<"2. Evin Bilgileri:"<<endl;
    cout<<"Oda Sayısı: "<<ev2.getOdaSayisi()<<endl;
    cout<<"Metrekare: "<<ev2.getMetrekare()<<endl;
    cout<<"Bahçeli Mi: "<<ev2.getBahceliMi()<<endl;
    cout<<"Kira: "<<ev2.kiraHesapla()<<"TL"<<endl;
}
*/