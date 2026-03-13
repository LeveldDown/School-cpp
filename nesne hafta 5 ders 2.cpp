/*
SORU
UML sınıf diyagramı verilen Fatura
sınıfını C++ dilinde gerçekleştiriniz.
kdvHesapla() : ara toplam üzerinden
KDV tutarını hesaplayıp geri
döndürmelidir.
genelToplam() : ara toplam + KDV
değerini hesaplayıp döndürmelidir.
faturaYazdir() : fatura bilgilerini
ekrana yazdırmalıdır.
*/

/*
#include <iostream>
using namespace std;

class Fatura{

private:

string faturaNo;
string musteriAdi;
double kdvOrani;
double araToplam;

public:

public:
    Fatura() { 
        faturaNo = "";
        musteriAdi = "";
        kdvOrani = 0.18;
        araToplam = 0.0;
    }

Fatura(string no, string musteri, double kdv, double ara){
    faturaNo=no;
    musteriAdi=musteri;
    kdvOrani=kdv;
    araToplam=ara;
}

void setFaturaNo(string no){
    faturaNo=no;
}
void setMusteriAdi(string ad){
    musteriAdi=ad;
}
void setKdvOrani(double oran){
    if(oran>=0 && oran <=1){
        kdvOrani=oran;
    }
    else{
        cout<<"Dikkat Gecersiz KDV orani! (0-1 arasinda olmali) KDV orani hala: 0.18"<<endl;
    }
}
void setAraToplam(double tutar){
    araToplam=tutar;
}
string getFaturaNo(){
    return faturaNo;
}
string getMusteriAdi(){
    return musteriAdi;
}
double getKdvOrani(){
    return kdvOrani;
}
double getAraToplam(){
    return araToplam;
}

double kdvHesapla(){
    return araToplam * kdvOrani;
}
double genelToplam(){
    return araToplam + kdvHesapla();
}
void faturaYazdir(){
    cout<<"=====FATURA====="<<endl;
    cout<<"Fatura No: "<<getFaturaNo()<<endl;
    cout<<"Müşteri Adı: "<<getMusteriAdi()<<endl;
    cout<<"Toplam: "<<genelToplam()<<"TL"<<endl;
    cout<<"KDV Oranı: %"<<getKdvOrani() * 100<<endl;
    cout<<"Genel Toplam: "<<genelToplam()<<endl;
    cout<<"================"<<endl;
}
};

int main(){
    Fatura f1;
    
    f1.setFaturaNo("F-2024-001");
    f1.setMusteriAdi("Mehmet Şen");
    f1.setKdvOrani(0.18);
    f1.setAraToplam(1000);
    
    f1.faturaYazdir();
    
    Fatura f2;
    
    f2.setFaturaNo("F-2024-001");
    f2.setMusteriAdi("Mehmet Şen");
    f2.setKdvOrani(0.18);
    f2.setAraToplam(2500);
    
    f2.faturaYazdir();
}
*/

/*
SORU
UML sınıf diyagramı verilen Kargo sınıfını C++ dilinde gerçekleştiriniz.
kargoUcreti() :
Ağırlığa göre kargo ücretini hesaplayıp geri döndürmelidir.
teslimatSuresi() :
Teslimat tipine göre gün sayısını döndürmelidir.
kargoYazdir() :
Kargo bilgilerini ekrana yazdırmalıdır.
*/
#include <iostream>
using namespace std;

class Kargo{
    
    private:
    
    string takipNo;
    string gonderen;
    string alici;
    double agirlik;
    string teslimatTipi;
    
    public:
    
    Kargo(){
        takipNo="";
        gonderen="";
        alici="";
        agirlik=0;
        teslimatTipi="standart";
    }
    
    Kargo(string no, string gon, string al, double agir, string tip){
        takipNo=no;
        gonderen=gon;
        alici=al;
        if(agir > 0){
            agirlik=agir;
        }
        else{
            agir=1;
            agirlik=agir;
        }
        teslimatTipi=tip;
    }
    void setTakipNo(string no){
        takipNo=no;
    }
    void setGonderen(string gon){
        gonderen=gon;
    }
    void setAlici(string al){
        alici=al;
    }
    void setAgirlik(double agir){
        if (agir > 0){
            agirlik=agir;
        }
    }
    void setTeslimatTipi(string tip){
        if (tip=="standart" || tip == "ekspres"){
            teslimatTipi=tip;
        }
    }
    
    string getTakipNo(){
        return takipNo;
    }
    string getGonderen(){
        return gonderen;
    }
    string getAlici(){
        return alici;
    }
    double getAgirlik(){
        return agirlik;
    }
    string getTeslimatTipi(){
        return teslimatTipi;
    }
    
    
    double kargoUcreti(){
        return (teslimatTipi == "ekspres") ? agirlik*25 : agirlik*10;
    }
    int teslimatSuresi(){
        return (teslimatTipi == "ekspres") ? 1 : 5;
    }
    void kargoYazdir(){
        cout<<"Kargo takip numarası: "<<getTakipNo()<<endl;
        cout<<"Kargoyu gönderen kişi: "<<getGonderen()<<endl;
        cout<<"Kargonun alıcısı: "<<getAlici()<<endl;
        cout<<"Kargo ağırlığı: "<<getAgirlik()<<" kg"<<endl;
        cout<<"Teslimat tipi"<<getTeslimatTipi()<<endl;
        cout<<"Teslim edilme süresi: "<<teslimatSuresi()<<" gün"<<endl;
        cout<<"Kargo ücreti: "<<kargoUcreti()<<" TL"<<endl;
    }
    
    
};

int main(){
    
    Kargo k;
    
    k.setTakipNo("12345");
    k.setGonderen("Patates");
    k.setAlici("Patlıcan");
    k.setAgirlik(15);
    k.setTeslimatTipi("ekspres");
    
    k.kargoYazdir();
}

