/*
header, .h ve main.cpp de
get ve set metotlarını:
Employee.cpp içinde yap onun içinde de #include "Employee.h" de

Employee.h içinde 
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
dedikten sonra private ve public kısımlarını yaz class ı başta yaz
class'ın şeyi }; ile bittikten sonra en sona #endif yaz

main.cpp içinde de #include "Employee.h" de
sonra int main aç ve yazdırma şeyini yap.
Employee emp1;
emp1.setInfo(***********);
emp1.setSalary(25000);

emp1.printEmployee();

gibi

üstteki kısım midterm de olmayacak.
alttaki kısım midterm de olacak!!

This işaretçisi

class Ogrenci{
    private:
    string isim;
    public:
    void setIsim(string isim){
        this->isim = isim;
    }
}
yukarıdaki örnekte this->isim = isim;
dediğimizde this->isim private'nin içinde olan "isim" olduğunu gösteriyor.
*/

//alakasız sınavda çıkabilecek tarzda bir soru:
#include <iostream>
using namespace std;

class Ev{
    private:
        int odaSayisi;
        int metrekare;
        bool bahceliMi;
    public:
        Ev(){
            this->odaSayisi = 0;
            this->metrekare = 0;
            this->bahceliMi = false;
        }
        Ev(int odaSayisi, int metrekare, bool bahceliMi){
            this->odaSayisi = odaSayisi;
            this->metrekare = metrekare;
            this->bahceliMi = bahceliMi;
        }
        
        void setOdaSayisi(int odaSayisi){
            this->odaSayisi = odaSayisi;
        }
        int getOdaSayisi(){
            return this->odaSayisi;
        }
        void setMetrekare(int metrekare){
            this->metrekare = metrekare;
        }
        int getMetrekare(){
            return this->metrekare;
        }
        void setBahceliMi(bool bahceliMi){
            this->bahceliMi = bahceliMi;
        }
        bool getBahceliMi(){
            return this->bahceliMi;
        }
        
        int kiraHesapla(){
        
        int kira = (this->odaSayisi * 6000) + (this->metrekare * 240);
        if (this->bahceliMi == true){
            kira += 10000;
            }
        return kira;
        }
};

int main(){
    Ev ev1(3,120,true);
    
    cout<<"1.Evin Bilgileri: "<<endl;
    cout<<"Oda Sayısı: "<<ev1.getOdaSayisi()<<endl;
    cout<<"Metrekare: "<<ev1.getMetrekare()<<endl;
    cout<<"Bahçeli mi:(1 ise var 0 ise yok)---> "<<ev1.getBahceliMi()<<endl;
    cout<<"Kira: "<<ev1.kiraHesapla()<<"TL"<<endl;
}


