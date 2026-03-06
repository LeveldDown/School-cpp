/*
Soru 1. Ucgen adında bir sınıf tasarlayınız. a, b ve c kenar uzunlukları
private olsun. Bu değişkenler için setA, setB, setC ve getA, getB, getC
metotlarını yazınız. (Kenarlar pozitif olmalıdır.) Aşağıdaki constructor’ları
aşırı yükleyiniz:
● Ucgen() (kenarları 0 yapar)
● Ucgen(double kenar) (eşkenar üçgen kabul edilir)
● Ucgen(double a, double b, double c)
f içinde aşağıdaki üye fonksiyonları yazınız: ucgenMi() , cevre(),
alan()
Kenarları, çevreyi ve alanı ekrana yazdıran yazdir() fonksiyonunu
yazınız. main() içinde farklı constructor’ları kullanarak birkaç üçgen
nesnesi oluşturup sonuçları gösteriniz.
Not: Alan hesaplamasında karekök almak için sqrt() fonksiyonunu
kullanabilirsiniz. Bunun için programa #include <cmath>
kütüphanesini ekleyiniz.
*/
/*
#include <iostream>
#include <cmath>
using namespace std;

class Ucgen{
    
    private:
    
    double a,b,c;
    
    public:
    
    Ucgen(){ //varsayılan
        a=0; b=0; c=0 ;
    }
    
    Ucgen(double kenar){
        setA(kenar); setB(kenar); setC(kenar);
    }
    
    Ucgen(double k1, double k2, double k3){
        setA(k1); setB(k2); setC(k3);
    }
    
    void setA(double k){
        if(a<=0){
            cout<<"kenar uzunluğu 0 veya 0'dan küçük olamaz!"<<endl;
        }
        else{
            a = (k>0) ? k : 0;
        }
    }
    void setB(double k){
        if(b<=0){
            cout<<"kenar uzunluğu 0 veya 0'dan küçük olamaz!"<<endl;
        }
        else{
            b = (k>0) ? k : 0;
        }
    }
    void setC(double k){
        if(c<=0){
            cout<<"kenar uzunluğu 0 veya 0'dan küçük olamaz!"<<endl;
        }
        else{
            c = (k>0) ? k : 0;
        }
    }
    
    int getA(){
        return a;
    }
    int getB(){
        return b;
    }
    int getC(){
        return c;
    }
    
    bool ucgenMi(){
        if(a<=0 || b<=0 || c<=0){
            return false;
        }
        if((a+b>c) && (b+c>a) && (c+a>b)){
            return true;
        }
        else{
            return false;
        }
    }
    double Cevre(){
        return a+b+c;
    }
    double Alan(){
        if(!ucgenMi()) return 0;
        double u = Cevre() / 2;
        return sqrt(u*(u-a)*(u-b)*(u-c));
        }
    void yazdir(){
        cout<<"Kenarlar: "<<a<<", "<<b<<", "<<c<<endl;
        if(ucgenMi()){
            cout<<"Çevre: "<<Cevre()<<", Alan: "<<Alan()<<endl;
        }
        else{
            cout<<"Girilen kenarlar bir üçgen oluşturamaz."<<endl;
        }
    }
};

int main(){
    Ucgen u1;
    Ucgen u2(5);
    Ucgen u3(3,4,5);
    
    cout<<"u1 sonuçları: "<<endl; u1.yazdir();
    cout<<"u2 sonuçları: "<<endl; u2.yazdir();
    cout<<"u3 sonuçları: "<<endl; u3.yazdir();
}
*/
/*
Soru 2. Batarya adında bir sınıf tasarlayınız. kapasite, doluluk ve tuketim isimli private değişkenler
tanımlayınız.
(kapasite ve doluluk mAh, tuketim mA cinsindendir.)
Bu değişkenler için setKapasite, setDoluluk, setTuketim ve getKapasite, getDoluluk, getTuketim
metotlarını yazınız.
(Değerler pozitif olmalıdır.)
Aşağıdaki constructor’ları aşırı yükleyiniz:
● Batarya()
● Batarya(int kapasite)
● Batarya(int kapasite, int doluluk, int tuketim)
Sınıf içinde aşağıdaki üye fonksiyonları yazınız:
● yuzde() → Bataryanın doluluk yüzdesini hesaplar.
● kalanSure() → Bataryanın yaklaşık kaç saat çalışabileceğini hesaplar.
● Sonuçları ekrana yazdıran yazdir() fonksiyonunu yazınız.
main() içinde hem constructor hem de set fonksiyonlarını kullanarak nesneler oluşturup
sonuçları gösteriniz.
*/
/*
#include <iostream>
#include <cmath>
using namespace std;

class Batarya{
    
    private:
    
    int kapasite;
    int doluluk;
    int tuketim;
    
    public:
    
    Batarya(){
        kapasite = 0; doluluk = 0; tuketim = 0;
    }
    Batarya(int k){
        setKapasite(k); doluluk = 0; tuketim = 0;
    }
    Batarya(int k, int d, int t){
        setKapasite(k); setDoluluk(d); setTuketim(t);
    }
    
    void setKapasite(int k){
        kapasite = (k>0) ? k : 0;
    }
    void setDoluluk(int d){
        doluluk = (d>0) ? d : 0;
    }
    void setTuketim(int t){
        tuketim = (t>0) ? t : 0;
    }
    
    int getKapasite(){
        return kapasite;
    }
    int getDoluluk(){
        return doluluk;
    }
    int getTuketim(){
        return tuketim;
    }
    
    double Yuzde(){
        if(kapasite == 0){
            return 0;
        }
        return (double(doluluk)/kapasite) * 100;
    }
    double kalanSure(){
        if(tuketim == 0){
            return 0;
        }
        return double(doluluk)/tuketim;
    }
    void yazdir(){
        cout<<"Batarya kapasitesi: "<<kapasite<<"mAh, Batarya doluluğu: "<<doluluk<<"mAh"<<endl;
        cout<<"Batarya tüketimi: "<<tuketim<<"mA"<<endl;
        cout<<"kalan batarya yüzdesi: %"<<Yuzde()<<", kalan kullanım süresi: "<<kalanSure()<<"saat"<<endl;
    }
};

int main(){
    Batarya b1(5000,4000,350);
    b1.yazdir();
    cout<<"-------------------------------"<<endl;
    
    Batarya b2;
    b2.setKapasite(4900);
    b2.setDoluluk(4550);
    b2.setTuketim(950);
    b2.yazdir();
}
*/