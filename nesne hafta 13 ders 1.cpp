/*Örnek
C++ dilinde çoklu kalıtım kullanarak aşağıdaki sınıf yapısını oluşturunuz.
- Calisan sınıfı:
    . Bir adet isim değişkeni içersin
    . Parametreli constructor ile isim bilgisi alınsın ve ekrana yazdırılsın
- Departman sınıfı:
    . Bir adet departmanAdi değişkeni içersin
    . Parametreli constructor ile departman adı alınsın ve ekrana yazdırılsın
- Mudur sınıfı:
    . Hem Calisan hem de Departman sınıfından kalıtım alsın
    . maas degiskeni bulunsun
    . Parametreli constructor ile tüm bilgileri alsın
    . Constructor içinde maaş bilgisini ekrana yazdırınız
    
  . main fonksiyonunda 1 adet mudur nesnesi oluşturunuz.
*/

#include <iostream>
using namespace std;

class Calisan{
    public:
    string isim;
    
    Calisan(string i){
        isim = i;
        cout<<"Calisan constructor: "<<isim<<endl;
    }
};

class Departman{
    public:
    string departmanAdi;
    
    Departman(string d){
        departmanAdi = d;
        cout<<"Departman constructor: "<<departmanAdi<<endl;
    }
};

class Mudur: public Calisan, public Departman {
    public:
    int maas;
    
    Mudur(string i, string d, int m) : Calisan (i), Departman (d) {
        maas = m;
        cout<<"Mudur constructor: "<<maas<<endl;
    }
};

int main(){
    Mudur m("Hasan", "Yazilim", 50000);
}