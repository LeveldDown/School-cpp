/*SORU KISMI:
mobilya stok sorusu saf sanal

Bir mobilya üretim firması için dijital stok yönetim sisteminin çekirdek mimarisini tasarlamanız

istenmektedir. Sistem, farklı mobilya türlerini ortak bir çatı altında yönetmeli ve her mobilyanın kendine

has özelliklerine göre dinamik olarak işlem yapabilmelidir.

Sizden istenen teknik gereksinimler şunlardır:

1. Temel Sınıf Tasarımı (Interface/Abstract Class)

Mobilya adında bir soyut temel sınıf (abstract class) oluşturun. Bu sınıf şu özelliklere sahip olmalıdır:

● Üye Değişkenler: Her mobilyanın bir ad (string), malzeme (string) ve tabanFiyat (double) bilgisi

olmalıdır. (Erişim belirleyicilerini kapsülleme ilkelerine uygun seçiniz).

● Sanal Yıkıcı: Bellek sızıntılarını önlemek amacıyla uygun bir yıkıcı (destructor) tanımlayın.

● Saf Sanal Fonksiyonlar:

○ ozellikleriGoster(): Nesne bilgilerini ekrana yazdıracak.

○ fiyatHesapla(): Mobilyanın son satış fiyatını döndürecek.

2. Türetilmiş Sınıflar (Concrete Classes)

Mobilya sınıfından kalıtım alan en az iki farklı sınıf tasarlayın:

● Masa Sınıfı: Ek olarak uzunluk ve genislik bilgilerini tutmalıdır. fiyatHesapla() fonksiyonu,

masanın yüzey alanına göre (Örn: alan * birim maliyet) taban fiyata ekleme yapmalıdır.

● Sandalye Sınıfı: Ek olarak tekerlekliMi (bool) bilgisini tutmalıdır. Eğer sandalye tekerlekliyse,

fiyatHesapla() fonksiyonu taban fiyata sabit bir "mekanizma ücreti" eklemelidir.

3. Dinamik Çok Biçimlilik (Polymorphism)

main fonksiyonu içerisinde:

● Farklı türdeki mobilya nesnelerini (Masa, Sandalye vb.) dinamik bellek yönetimi (new)

kullanarak oluşturun.

● Bu nesnelerin adreslerini, temel sınıf tipinde bir dizide veya vektörde (Mobilya*) saklayın.

● Bir döngü aracılığıyla, listenizdeki tüm mobilyaların özelliklerini ve hesaplanmış fiyatlarını

ekrana yazdırın.

● Program sonlanmadan önce kullanılan tüm bellek alanlarını (delete) serbest bırakın.
*/


//main.cpp kısmı
/*
#include <iostream>
#include "header.h"

using namespace std;

int main(){
    const int adet = 3;
    Mobilya* depo[adet];
    
    depo[0] = new Masa("Yer Masası", "Ahşap", 500, 1.5, 2);
    depo[1] = new Sandalye("Mutfak Sandalyesi", "Demir", 350, false);
    depo[2] = new Sandalye("Çalışma Koltuğu", "Plastik", 200, true);
    
    cout<<"--- Mobilya Stok Listesi ---"<<endl;
    
    for(int i = 0; i < adet; i++){
        depo[i]->ozellikleriGoster();
        cout<<endl;
        cout<<"Satış Fiyatı: "<<depo[i]->fiyatHesapla()<<" TL"<<endl;
    }
    
    for(int i = 0; i < adet; i++){
        delete depo[i];
    }
}
*/

//header.h kısmı:
/*
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

class Mobilya{
    protected:
    
    string ad;
    string malzeme;
    double tabanFiyat;
    
    public:
    
    Mobilya(string ad, string malzeme, double tabanFiyat);
    
    virtual ~Mobilya();
    
    virtual void ozellikleriGoster() const = 0;
    
    virtual double fiyatHesapla() const = 0;
    
};

class Masa : public Mobilya{
    private:
    
    double uzunluk;
    double genislik;
    
    public:
    
    Masa(string ad, string malzeme, double tabanFiyat, double uzunluk, double genislik);
    
    void ozellikleriGoster() const override;
    
    double fiyatHesapla() const override;
    
};

class Sandalye : public Mobilya{
    private:
    
    bool tekerlekliMi;
    
    public:
    
    Sandalye(string ad, string malzeme, double tabanFiyat, bool tekerlekliMi);
        
    void ozellikleriGoster() const override;

    double fiyatHesapla() const override;
};
#endif
*/

//kaynak.cpp kısmı:
/*
#include "header.h"

Mobilya::Mobilya(string ad, string malzeme, double tabanFiyat){
    this->ad = ad;
    this->malzeme = malzeme;
    this->tabanFiyat = tabanFiyat;
}

Mobilya::~Mobilya(){
    cout << this->ad << " bellekten temizlendi." << endl;
}

Masa::Masa(string ad, string malzeme, double tabanFiyat, double uzunluk, double genislik)
    : Mobilya(ad, malzeme, tabanFiyat) {
        this->uzunluk = uzunluk;
        this->genislik = genislik;
}

void Masa::ozellikleriGoster() const {
    cout << "Masa: " << this->ad << ", Malzeme: " << this->malzeme << ", Ölçüsü: " << this->uzunluk << " x " << this->genislik << " m" << endl;
}

double Masa::fiyatHesapla() const {
    return this->tabanFiyat + (this->uzunluk * this->genislik * 120.0);
}

Sandalye::Sandalye(string ad, string malzeme, double tabanFiyat, bool tekerlekliMi)
    : Mobilya(ad, malzeme, tabanFiyat) {
        this->tekerlekliMi = tekerlekliMi;
}

void Sandalye::ozellikleriGoster() const {
    cout << "Sandalye: " << this->ad << ", Malzeme: " << this->malzeme 
         << ", Tekerlekli Mi? " << this->tekerlekliMi 
         << " -> (eğer sayı 1 ise tekerleklidir değilse tekerleksizdir.)" << endl; 
}

double Sandalye::fiyatHesapla() const {
    return this->tabanFiyat + (this->tekerlekliMi ? 300 : 0);
}
*/

//bunların hepsinin tek dosya olduğu hali:
/*
 #include <iostream>

using namespace std;


class Mobilya{

    protected:

    

    string ad;

    string malzeme;

    double tabanFiyat;

    

    public:

    

    Mobilya(string ad, string malzeme, double tabanFiyat){

        this->ad = ad;

        this->malzeme = malzeme;

        this->tabanFiyat = tabanFiyat;

    }

    virtual ~Mobilya(){

        cout<<this->ad<<" bellekten temizlendi."<<endl;

    }

    

    virtual void ozellikleriGoster() const = 0;

    

    virtual double fiyatHesapla() const = 0;

    

};


class Masa : public Mobilya{

    private:

    

    double uzunluk;

    double genislik;

    

    public:

    

    Masa(string ad, string malzeme, double tabanFiyat, double uzunluk, double genislik)

        : Mobilya(ad, malzeme, tabanFiyat) {

            this->uzunluk = uzunluk;

            this->genislik = genislik;

    }

    

    void ozellikleriGoster() const override{

        cout<<"Masa: "<<this->ad<<", Malzeme: "<<this->malzeme<<", Ölçüsü: "<<this->uzunluk<<" x "<<this->genislik<<" m"<<endl;

    }

    

    double fiyatHesapla() const override{

        return this->tabanFiyat + (this->uzunluk * this->genislik * 120.0);

    }

    

};


class Sandalye : public Mobilya{

    private:

    

    bool tekerlekliMi;

    

    public:

    

    Sandalye(string ad, string malzeme, double tabanFiyat, bool tekerlekliMi)

        : Mobilya(ad, malzeme, tabanFiyat){

            this->tekerlekliMi = tekerlekliMi;

        }

        

    void ozellikleriGoster() const override{

        cout<<"Sandalye: "<<this->ad<<", Malzeme: "<<this->malzeme<<", Tekerlekli Mi? "<<this->tekerlekliMi<<"->(eğer sayı 1 ise tekerleklidir değilse tekerleksizdir.)"<<endl;

    }

    double fiyatHesapla() const override{

        return this->tabanFiyat + (this->tekerlekliMi ? 300 : 0);

    }

};


int main(){

    const int adet = 3;

    Mobilya* depo[adet];

    

    depo[0] = new Masa("Yer Masası", "Ahşap", 500, 1.5, 2);

    depo[1] = new Sandalye("Mutfak Sandalyesi", "Demir", 350, false);

    depo[2] = new Sandalye("Çalışma Koltuğu", "Plastik", 200, true);

    

    cout<<"--- Mobilya Stok Listesi ---"<<endl;

    

    for(int i = 0; i < adet; i++){

        depo[i]->ozellikleriGoster();

        cout<<endl;

        cout<<"Satış Fiyatı: "<<depo[i]->fiyatHesapla()<<" TL"<<endl;

    }

    

    for(int i = 0; i < adet; i++){

        delete depo[i];

    }

} 
*/
