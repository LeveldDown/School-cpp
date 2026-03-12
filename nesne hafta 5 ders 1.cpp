/*
#include <iostream>
using namespace std;

class Employee{
    
    private:
    
    int id;
    string name;
    double salary;
    
    public:
    
    void setInfo(int i, string n){
        id=i;
        name=n;
    }
    void setSalary(double s){
        
        salary=s;
    }
    double getSalary(){
        return salary;
    }
    void printEmployee(){
        cout<<"id: "<<id<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};

int main(){
    Employee e;
    e.setInfo(101,"Ahmet");
    e.setSalary(50000);
    e.printEmployee();
    
    
}
*/

/*
#include <iostream>
using namespace std;

class Siparis{
    
    private:
    
    int siparisNo,adet;
    string musteriAdi, urunAdi;
    double birimFiyat;
    
    public:
    
    Siparis(int no, string musteri, string urun, int a, double fiyat){
        
        siparisNo=no;
        musteriAdi=musteri;
        urunAdi=urun;
        adet=a;
        birimFiyat=fiyat;
    }
    double toplamTutarHesapla(){
        return adet*birimFiyat;
    }
    void siparisYazdir(){
        cout<<"Sipariş no: "<<siparisNo<<endl;
        cout<<"Müşteri adı: "<<musteriAdi<<endl;
        cout<<"Ürün: "<<urunAdi<<endl;
        cout<<"Adet: "<<adet<<endl;
        cout<<"Birim Fiyat: "<<birimFiyat<<endl;
        cout<<"Toplam Tutar: "<<toplamTutarHesapla()<<endl;
    }
};
int main(){
    Siparis s(101,"Veli","Çorba",2,120);
    
    s.siparisYazdir();
}
*/