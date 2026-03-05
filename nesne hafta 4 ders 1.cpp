/*get ve set metodlarını da kullanarak Tarih sınıfını yazalım, mainde Tarih
isimli 2 nesne oluşturup değerlerini ekrana yazdıralım.
*/
/*
#include <iostream>
using namespace std;

class Tarih{
    
    private:
    
    int gun,ay,yil;
    
    public:
    
    void TarihAta(int g, int a, int y){
        gun=g;
        ay=a;
        yil=y;
    }
    void gunAta(int g){
        if(g<1 || g>31)
        cout<<"yanlis gun bilgisi girildi."<<endl;
        else{
            gun=g;
        }
    }
    void ayAta(int a){
        if (a<1 || a>12){
            cout<<"yanlis ay bilgisi girildi."<<endl;
        }
        else{
            ay=a;
        }
    }
    void yilAta(int y){
        if(y<1){
            cout<<"Lütfen geçerli bir yıl giriniz."<<endl;
        }
        else{
            yil=y;
        }
    }
    int gunAl(){
        return gun;
    }
    int ayAl(){
        return ay;
    }
    int yilAl(){
        return yil;
    }
    
};

int main(){
    Tarih T1;
    T1.TarihAta(5,3,2026);
    
    cout<<"bugünün tarihi: "<<T1.gunAl()<<"/"<<T1.ayAl()<<"/"<<T1.yilAl()<<endl;
    
    Tarih T2;
    T2.gunAta(3);
    T2.ayAta(8);
    T2.yilAta(2026);
    cout<<"cumburlop tarihi: "<<T2.gunAl()<<"/"<<T2.ayAl()<<"/"<<T2.yilAl()<<endl;
}
*/


/*
Bir saat sınıfı tanımlayınız.
-saat dakika ve saniye isimli private değişkenlere sahip olmalıdır.
-bu değişkenlere değer atamak için gerekli set metotlarını yazınız.
    (saat 0-23, dakika ve saniye 0-59 aralığında olmalıdır.)
-değerleri okumak için get metotlarını yazınız.
-aşağıdaki constructorl'ları aşırı yükleyerek (overloading) tanımlayınız.
    parametsiz constructor
    saat ve dakika alan constructor
    saat, dakika ve saniye alan constructor
    saat bilgisini ss:dd:sn formatında ekrana yazdıran bir metot oluşturunuz.
main fonksiyonunda farklı constructor'ları kullanarak nesneler oluşturup sonuçları gösteriniz.
*/
/*
#include <iostream>
using namespace std;

class Saat{
    
    private:
    int saat;
    int dakika;
    int saniye;
    
    public:
    
    Saat(){
        saat=0;
        dakika=0;
        saniye=0;
    }
    Saat(int s, int d){
        saniye=0;
        saatAta(s);
        dakikaAta(d);
    }
    Saat(int s, int d, int sn){
        saniyeAta(sn);
        saatAta(s);
        dakikaAta(d);
    }
    void saatAta(int s){
        if(s>=0 && s<24)
            saat=s;
        else
            cout<<"geçersiz saat"<<endl;
    }
    void dakikaAta(int d){
        if(d>=0 && d<60)
            dakika=d;
        else
            cout<<"geçersiz dakika"<<endl;
    }
    void saniyeAta(int sn){
        if(sn>=0 && sn<60)
            saniye=sn;
        else
            cout<<"geçersiz saniye"<<endl;
    }
    int saatAl(){
        return saat;
    }
    
    int dakikaAl(){
        return dakika;
    }
    int saniyeAl(){
        return saniye;
    }
    
    void yazdir(){
        cout<<(saat<10 ? "0": "")<<saat<<":"<<(dakika<10 ? "0": "")<<dakika<<":"<<(saniye<10 ? "0": "")<<saniye<<endl;
    }
};

int main(){
    Saat s1;
    cout<<"varsayılan saat : ";
    s1.yazdir();
    
    Saat s2(14,30);
    cout<<"2. saat bilgisi: ";
    s2.yazdir();
    
    Saat s3(8,10,38);
    cout<<"3. saat bilgisi: ";
    s3.yazdir();
}
*/