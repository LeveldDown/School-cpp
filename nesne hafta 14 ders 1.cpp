#include <iostream>
using namespace std;

class Sekil{
    public:
    virtual void ciz(){
        cout<<"Sekil ciziliyor"<<endl;
    }
    virtual double alanHesapla(){
        return 0;
    }
};
class Dikdortgen : public Sekil{
    private:
    double en;
    double boy;
    
    public:
    Dikdortgen(double e, double b){
        this->en = e;
        this->boy = b;
    }
    void ciz() override{
        cout<<"Dikdortgen ciziliyor"<<endl;
    }
    double alanHesapla() override{
        return en*boy;
    }
};
class Daire : public Sekil{
    private:
    double yaricap;
    
    public:
    Daire(double r){
        this->yaricap = r;
    }
        void ciz() override{
            cout<<"Daire ciziliyor"<<endl;
        }
        double alanHesapla() override{
            return 3.141592*yaricap;
        }
};

int main(){
    Sekil* sekiller[2];
    
    sekiller[0] = new Dikdortgen(4,5);
    sekiller[1] = new Daire(3);
    
    for(int i = 0; i<2; i++){
        sekiller[i]->ciz();
        cout<<"Alan: "<<sekiller[i]->alanHesapla()<<endl;
        cout<<endl;
    }
    
    delete sekiller[0];
    delete sekiller[1];
}

/*Örnek soru
-Bir üniversitede farklı türde öğrencilerin not hesaplaması yapılacaktır.
-Bu sistemde ortak bilgileri tutmak için Ogrenci adında bir soyut sınıf
tanımlanmalı ve bu sınıftan iki sınıf türetilmelidir.
    -Ogrenci sınıfında:
. ad bilgisi bulunmalıdır
. bilgiGoster() fonksiyonu öğrencinin adını ekrana yazdırmalıdır.
. notHesapla() fonksiyonu saf sanal fonksiyon olarak tanımlanmalıdır.
    -LisansOgrencisi
. vize ve finalNotu bilgilerini tutmalıdır.
. Not hesabı:
    vize * 0.4 + finalNotu * 0.6
    -YuksekLisansOgrencisi
. proje notunu tutmalıdır.
. not hesabı doğrudan proje notudur

-notHesapla() fonksiyonunu yazınız.
-Türetilmiş sınıflarda notHesapla() fonksiyonunu override ediniz.
-main() fonksiyonunda bir lisans ve bir yüksek lisans öğrencisi oluşturup
bilgilerini ve notlarını ekrana yazdırınız.
*/


#include <iostream>
using namespace std;

class Ogrenci{
    protected:
    string ad;
    
    public:
    
    Ogrenci(string a){
        ad = a;
    }
    
    virtual double notHesapla() = 0;
    
    void bilgiGoster(){
        cout<<"Ogrenci Adi: "<<ad<<endl;
    }
    
    virtual ~Ogrenci(){}
};
class LisansOgrencisi : public Ogrenci{
    private:
    double vize, finalNotu;
    
    public:
    
    LisansOgrencisi(string a, double v, double f)
        : Ogrenci(a)
        {
            vize = v;
            finalNotu = f;
        }
        
        double notHesapla() override{
            return vize * 0.4 + finalNotu * 0.6;
        }
};
class YuksekLisansOgrencisi : public Ogrenci{
    private: 
    double proje;
    
    public:
    YuksekLisansOgrencisi(string a, double p)
        : Ogrenci(a)
    {
        proje = p;
    }
    
    double notHesapla() override{
        return proje;
    }
};
int main(){
    LisansOgrencisi l1("Ayşe", 70, 90);
    
    YuksekLisansOgrencisi y1("Mehmet", 95);
    
    l1.bilgiGoster();
    cout<<"Not: "<<l1.notHesapla()<<endl;
    cout<<endl;
    
    y1.bilgiGoster();
    cout<<"Not: "<<y1.notHesapla()<<endl;
    
    Ogrenci* ptr1 = new LisansOgrencisi("Zeynep", 80, 100);
    
    Ogrenci* ptr2 = new YuksekLisansOgrencisi("Ahmet", 88);
    
    ptr1->bilgiGoster();
    cout<<"Not: "<<ptr1->notHesapla()<<endl;
    
    cout<<endl;
    
    ptr2->bilgiGoster();
    cout<<"Not: "<<ptr2->notHesapla()<<endl;
}
