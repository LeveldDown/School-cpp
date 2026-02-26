/*
#include <iostream>
using namespace std;

class Banka{
    
    public:
    int hesapNo;
    string sahipAdi;
    float bakiye;
    
    void paraYatir(float miktar){
        bakiye=bakiye+miktar;
        cout<<miktar<<"tl yatırıldı: "<<endl;
    }
    void paraCek(float miktar){
        if(miktar>bakiye)
            cout<<"yetersiz bakiye"<<endl;
        else{
            bakiye=bakiye-miktar;
            cout<<miktar<<" tl çekildi: "<<endl;
        }
    }
    void bakiyeGoster(){
        cout<<"güncel bakiye : "<< bakiye<<endl;
    }
    
};

int main(){
    
    banka hesap1={12345, "Mehmet Yıldız", 5000};
    hesap1.paraYatir(600);
    hesap1.paraCek(1500);
    hesap1.bakiyeGoster();
    
}
*/
/*örnek 2: bir araba sınıfı tanımlayınız.
üyeler: marka, model ve hiz olsun.
üye fonks: gazVer(), Yavasla(), arabaDurumu()   (marka model ve hız bilgilerini yazdırın)
1- Constructor kullanarak bir araba nesnesi oluşturunuz.
2- ikinci bir araba nesnesi daha oluşturunuz. bu sefer bilgilerini kullanıcıdan alınız
3- Her iki araba için hızlanma ve yavaşlama işlemleri yapınız.
4- son durumlarını ekrana yazdırınız.
*/
/*
#include <iostream>
using namespace std;

class Araba{
    
    public:
    string marka;
    string model;
    int hiz;
    
    Araba(string m, string mo, int h){
        
        marka=m;
        model=mo;
        hiz=h;
    }
    Araba(){}
    
    void gazVer(int gaz){
        hiz+=gaz;
        cout<<gaz<<"km/h hızlandı"<<endl;
    }
    void Yavasla(int fren){
        hiz-=fren;
        
        if(hiz<0)
            hiz=0;
        cout<<fren<<"km/h yavaşladı"<<endl;
    }
    void arabaDurumu(){
        
        cout<<"marka: "<<marka<<" model: "<<model<<" hız: "<<hiz<<endl;
        cout<<"***********"<<endl;
    }

};

int main(){
    
    Araba a1("Renault", "Clio", 0);
    Araba a2;
    cout<<"marka girin: ";
    cin>>a2.marka;
    
    cout<<"model girin: ";
    cin>>a2.model;
    
    cout<<"hız girin: ";
    cin>>a2.hiz;
    
    a2.arabaDurumu();
    a2.gazVer(30);
    a2.Yavasla(100);
    a2.arabaDurumu();
    cout<<"***************"<<endl;
    
    a1.arabaDurumu();
    a1.gazVer(50);
    a1.arabaDurumu();
    a1.Yavasla(20);
    a1.arabaDurumu();
}
*/