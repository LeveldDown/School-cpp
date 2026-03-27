#include <iostream>
using namespace std;

class Kumas{
    private:
    
        string urunAdi;
        string tur;
        double pamukOrani;
        double bambuOrani;
        double polyesterOrani;
        
    public:
        
        Kumas(){
            this->urunAdi = "Belirtilmedi";
            this->tur = "Belirtilmedi";
            this-> pamukOrani = 0.0;
            this->bambuOrani = 0.0;
            this->polyesterOrani = 0.0;
        }
        
        Kumas(string urunAdi, string tur, double pamukOrani, double bambuOrani, double polyesterOrani){
            this->urunAdi = urunAdi;
            this->tur = tur;
            this->pamukOrani = pamukOrani;
            this->bambuOrani = bambuOrani;
            this->polyesterOrani = polyesterOrani;
        }
        void setUrunAdi(string urunAdi){
            this->urunAdi = urunAdi;
        }
        void setTur(string tur){
            this->tur = tur;
        }
        void setPamukOrani(double pamukOrani){
            this->pamukOrani = pamukOrani;
        }
        void setBambuOrani(double bambuOrani){
            this->bambuOrani = bambuOrani;
        }
        void setPolyesterOrani(double polyesterOrani){
            this->polyesterOrani = polyesterOrani;
        }
        string getUrunAdi(){
            return this->urunAdi;
        }
        string getTur(){
            return this->tur;
        }
        double getPamukOrani(){
            return this->pamukOrani;
        }
        double getBambuOrani(){
            return this->bambuOrani;
        }
        double getPolyesterOrani(){
            return this->polyesterOrani;
        }
        
        double toplamOranHesapla(){
            return this->pamukOrani + this->bambuOrani + this->polyesterOrani;
        }
        
        string saglikliMi(){
            if((this->pamukOrani + this-> bambuOrani) >= 50.0){
                return "Saglikli";
            }
            else{
                return "Saglikli degil";
            }
        }
        
        void bilgileriYazdir(){
            cout<<"Ürün Adı: "<<this->urunAdi<<endl;
            cout<<"Ürünün Türü: "<<this->tur<<endl;
            cout<<"Pamuk Oranı: %"<<this->pamukOrani<<endl;
            cout<<"Bambu Oranı: %"<<this->bambuOrani<<endl;
            cout<<"Polyester Oranı: %"<<this->polyesterOrani<<endl;
            cout<<"Toplam Oran: %"<<toplamOranHesapla()<<endl;
            cout<<"Sağlıklı Mı?: "<<saglikliMi()<<endl;
        }
};

int main(){
    Kumas kumas1("Kışlık Kaban","Kaban",60,5,35);
    cout<<"1. kumaş bilgileri: "<<endl;
    kumas1.bilgileriYazdir();
    
    cout<<"---------------------"<<endl;
    
    Kumas kumas2;
    kumas2.setUrunAdi("Yazlık T-shirt");
    kumas2.setTur("T-shirt");
    kumas2.setPamukOrani(30);
    kumas2.setBambuOrani(12);
    kumas2.setPolyesterOrani(58);
    
    cout<<"2. kumaş bilgileri: "<<endl;
    kumas2.bilgileriYazdir();
}