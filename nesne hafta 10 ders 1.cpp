/*POINTERLAR
& = adres operatörü / değişkenin adresini döndürür.
* = dereference operatörü / o adresteki değeri döndürür.

int a = 5; olsun
int* yPtr = &a; //Buradaki * "bu bir pointer" demek.
*yPtr = 9; // buradaki * bu adrese git demek.

int* yPtr derken int dememizin sebebi "a"nın bir int olmasıdır.
*/

/* ÖRNEK 1

#include <iostream>
using namespace std;

int main(){
    

int y = 5;
int *yPtr = nullptr;
yPtr = &y; //yPtr, y'nin adresini tutar.

cout<<y<<endl; //-->5(değer)
cout<<&y<<endl;
cout<<yPtr<<endl;
cout<<*yPtr<<endl; //--> adrese gidip içini oku
nesne vize sorusu
*yPtr = 9; //--> y'nin değeri artık 9 oldu!

cout<<"-------------"<<endl;
cout<<y<<endl;
cout<<&y<<endl;
cout<<yPtr<<endl;
}

*/

/*
#include <iostream>
using namespace std;

int main(){
    
    int ilkdeger = 5, ikincideger = 15;
    int *p1, *p2;
    
    p1 = &ilkdeger;
    p2 = &ikincideger;
    
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<ilkdeger<<endl;
    cout<<ikincideger<<endl;
    
    *p1 = 10;
    *p2 = *p1;
    
    cout<<"-----------------"<<endl;
    cout<<ilkdeger<<endl;
    cout<<ikincideger<<endl;
    
    p1 = p2;
    cout<<"---------------"<<endl;
    cout<<"p1 = p2 sonrası"<<endl;
    cout<<p1<<endl;
    
    *p1 = 20;
    cout<<"---------------"<<endl;
    cout<<ilkdeger<<endl;
    cout<<ikincideger<<endl;
    
}
*/

/*

//DINAMIK BELLEK (new / delete)
#include <iostream>
using namespace std;
//1. TEK DEĞİŞKEN
int main(){
    int *ip;
    ip = new int; //Heap'te int için yer ayır.
    *ip = 75;
    cout<<*ip<<endl; // ->75
    cout<<ip<<endl;
    
    delete ip; //-> alanı geri verdi.
    ip = nullptr;
    
    cout<<ip<<endl;
    cout<<*ip<<endl;
}
*/

/*

#include <iostream>
using namespace std;

int main(){
    
    int *s1 = new int;
    int *s2 = new int;
    int *s3 = new int;
    int *toplam = new int;
    
    cout<<"1. sayıyı girin: "<<endl;
    cin>>*s1;
    
    cout<<"2. sayıyı girin: "<<endl;
    cin>>*s2;
    
    cout<<"3. sayıyı girin: "<<endl;
    cin>>*s3;
    
    *toplam = *s1+*s2+*s3;
    
    cout<<"Girilenlerin toplamı: ";
    cout<<*toplam<<endl;
    
    delete s1;// burada delete s1,s2,s3 şeklinde yapamazsın hepsini ayrı ayrı yazman gerekiyor!
    delete s2;
    delete s3;
    delete toplam;
    
    cout<<*toplam<<endl;
}
*/

/* Aşağıda özellikleri verilen Sporcu sınıfını C++ dilinde yazınız.
Sınıf özellikleri:
- sporcuAdi(string), yas(int), puan(int)
- setBilgi()-->sporcu bilgilerini atayan fonksiyon
- puanGuncelle(int artis)-->sporcunun puanını artıran fonksiyon
- bilgiYazdir()-->sporcu bilgilerini ekrana yazdıran fonksiyon
İSTENENLER:
- main fonksiyonunda new operatörü kullanarak 2 adet Sporcu nesnesi oluştur.
- Her iki sporcuya da değer ata.
- Bir sporcunun puanını fonksiyon ile artırınız.
- Her iki sporcunun bilgilerini ekrana yazdır.
*/

#include <iostream>
using namespace std;

class Sporcu{
    private:
    string sporcuAdi;
    int yas;
    int puan;
    
    public:
    void setBilgi(string ad, int y, int p){
        
        sporcuAdi=ad;
        yas=y;
        puan=p;
    }
    void puanGuncelle(int artis){
        puan+=artis;
    }
    void bilgiYazdir(){
        cout<<"Sporcu: "<<sporcuAdi<<endl;
        cout<<"yaş: "<<yas<<endl;
        cout<<"puan: "<<puan<<endl;
    }
    
};

int main(){
    
    Sporcu* s1=new Sporcu;
    Sporcu* s2=new Sporcu;
    
    s1->setBilgi("Ali",20,100);
    (*s2).setBilgi("Ayşe",22,150);
    
    s1->puanGuncelle(20);
    
    s1->bilgiYazdir();
    s2->bilgiYazdir();
    
    delete s1;
    delete s2;
    
}