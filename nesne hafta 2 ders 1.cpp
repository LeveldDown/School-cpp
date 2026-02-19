//STRUCT YAPISI
/* 1. aşama: öğrenci isimli bir yapı oluşturalım.
    ad, numara ve not ortalaması gibi üyelere sahip olsun
    daha sonra bu yapıdan bir öğrenci nesnesi oluşturunuz.
    isim, numara ve not ortalamasını değerlerini kendimiz belirleyelim
    bu öğrencinin bilgilerini ekrana yazdıralım.
    */
#include <iostream>
using namespace std;

struct Ogrenci{
    string ad;
    int no;
    float notOrtalamasi;
};
/* 3. aşama : bu öğrenci yapısını fonksiyon kullanarak da yazdıralım
  */
void Yazdir(Ogrenci x){
    
    cout<<"yazdırma fonksiyonu çalışıyor"<<endl;
    cout<<"öğrenci adı: "<<x.ad<<endl;
    cout<<"öğrenci numarası: "<<x.no<<endl;
    cout<<"öğrenci ortalaması: "<<x.notOrtalamasi<<endl;
}
/* 4. aşama : yine aynı öğrenci yapısından 3. bir öğrenci nesne oluşturalım bu sefer bunu fonksiyon ile yapalım
    önce öğrenci oluşturan bir fonksiyon tanımlamamız gerekli,
    daha sonra ekrana yazdıralım.
    */
Ogrenci ogrenciOlustur(string isim, int numara, float ort){
    
    Ogrenci yeni;
    yeni.ad=isim;
    yeni.no=numara;
    yeni.notOrtalamasi=ort;
    
    return yeni;
}
/* 5. aşama : Tanımladığımız öğrenci yapısı için 1 fonksiyon tanımlayalım :
    öğrencinin harf notuna göre üst dönemden ders alabilir / alamaz hesaplatalım
    (ortalaması 3.5 ve üstü ise alabilir değilse alamaz)
*/
void ustDonemKontrol(Ogrenci ogr){
    
    if(ogr.notOrtalamasi>=3.50)
        cout<<ogr.ad<<" öğrenci üstten ders alabilir"<<endl;
    else
        cout<<ogr.ad<<" öğrenci üstten ders alamaz"<<endl;
}

int main(){
    Ogrenci ogr3=ogrenciOlustur("Fatma Demir", 1010, 2.70);
    Yazdir(ogr3);
    
    
    Ogrenci ogr1;

    ogr1.ad = "Ayşe";
    ogr1.no = 1001;
    ogr1.notOrtalamasi = 3.55;

    cout<<"1. öğrencinin adı: "<<ogr1.ad<<" numarası : "<<ogr1.no<< " ortalaması: "<<ogr1.notOrtalamasi<<endl;
/* 2. aşama : öğrenci isimli yapıdan 2. bir öğrenci nesnesi oluşturalım.
    ilk değer atama ile oluşturulup,
    2. öğrenci bilgilerini fonksiyon ile yazdıralım.
    */
    
    Ogrenci ogr2={"Ali Yılmaz", 1002, 3.20};
    cout<<"2. öğrencinin adı: "<<ogr2.ad<<endl;
    cout<<"2. öğrencinin numarası: "<<ogr2.no<<endl;
    cout<<"2. öğrencinin ortalaması: "<<ogr2.notOrtalamasi<<endl;
    
    Yazdir(ogr2);
    
    cout<<"*******************"<<endl;
    ustDonemKontrol(ogr1);
    ustDonemKontrol(ogr2);
    ustDonemKontrol(ogr3);
    
    return 0;
}
//CLASS - SINIF YAPISI
/*Sınıf örnek:
Bir çalışan sınıfı tanımlayınız.
üyeleri => ad, id ve maas
bu sınıfın örneğini / nesnesini oluşturunuz.
    üyelerin değerlerinin atamasını yaptıktan sonra bilgilerini ekrana yazdıralım.
daha sonra 2. bir çalışan nesnesi oluşturun bu sefer ilk değer atama ile yapınız.
çalışanların bilgilerini ekrana yazdıran bir üye fonksiyon tanımlayıp çalışanların bilgilerini ekrana yazdırınız.
daha daha sonra çalışan oluştur fonksiyonunu oluştur.
*/
/*
#include <iostream>
using namespace std;

class Calisan{
    
    public://bunu yazmazsan private olduğu varsayılır ve bunlar gizlenir. çıktıda hata alırsın. çünkü böyle bir int falan olmayacak
    int id;
    string ad;
    float maas;
    
    void bilgiYazdir(){
        cout<<"fonksiyon çalıştı---"<<endl;
        cout<<"id: "<<id<<" ad: "<<ad<<" maas: "<<maas<<endl;
    }
    Calisan(){}
    Calisan(int i, string a, float m){
        id=i;
        ad=a;
        maas=m;
    }
};

int main(){
    
    Calisan calisan3(5011,"İsmail",90000);
    Calisan calisan;
    calisan3.bilgiYazdir();
    
    calisan.id=1044;
    calisan.ad="Ahmet";
    calisan.maas=50000;
    
    cout<<"id: "<<calisan.id<<endl;
    cout<<"ad: "<<calisan.ad<<endl;
    cout<<"maaşı: "<<calisan.maas<<endl;
    
    Calisan c2={2033,"Zeynep",70000};
    
    cout<<"id: "<<c2.id<<endl;
    cout<<"ad: "<<c2.ad<<endl;
    cout<<"maaşı: "<<c2.maas<<endl;
    
    c2.bilgiYazdir();
    
    return 0;
}
*/


/* SORU 1
kitap isimli bir sınıf tanımlayınız.
Sınıfın üyeleri: baslik, isbn, fiyat olsun.
main içinde 1. kitap nesnesi oluşturunuz.(parametresiz oluştur)
bu 1. kitap nesnesinin üyelerine değer atayınız.(ör. başlık isbn)
üyelerin değerleri atandıktan sonra bilgilerini ekrana yazdırınız.
kitap sınıfı içinde, kitap bilgilerini ekrana yazdıran üye fonksiyon yazınız
2. kitap nesnesi oluşturunuz(ilk değer atama / constructor kullanarak)
    örn: kitap k2("...","...", 199.90);
    ve 2. kitap nesnesinin bilgilerini bilgiYazdir() fonksiyonu ile yazdırınız.
*/
/*
#include <iostream>
using namespace std;

class Kitap{
    
    public:
    
    string baslik;
    string isbn;
    float fiyat;
    
    void Yazdir(){
        cout<<"---kitap bilgileri ---"<<endl;
        cout<<"kitap başlığı: "<<baslik<<endl;
        cout<<"isbn bilgisi : "<<isbn<<endl;
        cout<<"fiyat : "<<fiyat<<endl;
    }
    Kitap(){}
    
    Kitap(string b, string i, float f){
        
        baslik=b;
        isbn=i;
        fiyat=f;
    }
};

int main(){
    Kitap k1={"C++ Programlama", "123456789", 350.75};
    cout<<"kitap başlığı: "<<k1.baslik<<" isbn bilgisi : "<<k1.isbn<<" fiyat : "<<k1.fiyat<<endl;
    k1.Yazdir();
    
    Kitap k2("Algoritma", "55227711",400.50);
    k2.Yazdir();
    
    return 0;
}
*/