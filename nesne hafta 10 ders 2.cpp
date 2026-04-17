/* Pointer kullanarak yarıçap ve yüksekliği kullanıcıdan alan, silindirin hacmini hesaplayıp
ekrana yazdıran C++ programını yazınız.
*/

/*
#include <iostream>
using namespace std;

int main(){
    
    double *yaricap = new double;
    double *yukseklik = new double;
    double *hacim = new double;
    
    cout<<"yarıçapı girin: "<<endl;
    cin>>*yaricap;
    
    cout<<"yüksekliği girin: "<<endl;
    cin>>*yukseklik;
    
    *hacim = 3.141592*(*yaricap)*(*yaricap)*(*yukseklik);
    
    cout<<"hacim: "<<*hacim<<endl;
    
    delete yaricap;
    delete yukseklik;
    delete hacim;
}
*/

/*new kullanarak dinamik bellekte uzunluk, genişlik, yükseklik ve yarıçap değişkenleri için yer
ayırınız. Kullanıcıdan bu değerleri alarak: Dikdörtgenler prizmasının hacmini ve dairenin alanını
pointerlar aracılığıyla hesaplayınız. Sonuçları ekrana yazdırınız. değişkenlerin bellek adreslerini ekrana
yazdırmak için ise fonksiyon tanımlayınız. Program sonunda bellegi serbest bırakınız.
*/

/*
#include <iostream>
using namespace std;

void adresYazdir(string isim, double *ptr){
    cout<<isim<<" değişkenin bellek adresi: "<<ptr<<endl;
}

int main(){
    
    double *uzunluk = new double;
    double *genislik = new double;
    double *yukseklik = new double;
    double *yaricap = new double;
    double pi = 3.141592;
    
    cout<<"uzunluk girin: "<<endl;
    cin>>*uzunluk;
    
    cout<<"genişlik girin: "<<endl;
    cin>>*genislik;
    
    cout<<"yükseklik girin: "<<endl;
    cin>>*yukseklik;
    
    cout<<"dairenin yarıçapını girin: "<<endl;
    cin>>*yaricap;
    
    double dikHacim = (*uzunluk)*(*genislik)*(*yukseklik);
    double daireAlan = pi*(*yaricap)*(*yaricap);
    
    cout<<"Dikdörtgenler prizmasının hacmi: "<<dikHacim<<endl;
    cout<<"Dairenin alanı: "<<daireAlan<<endl;
    
    cout<<"Bellek adresleri:"<<endl;
    
    adresYazdir("Uzunluk", uzunluk);
    adresYazdir("Genişlik", genislik);
    adresYazdir("Yükseklik", yukseklik);
    adresYazdir("Yarıçap", yaricap);
    
    delete uzunluk;
    delete genislik;
    delete yukseklik;
    delete yaricap;
}
*/

/* C++ dilinde Kitap adında bir sınıf tanımlayınız. Sınıf aşağıdaki özelliklere sahip olacaktır:
kitapAdi(string)
sayfaSayisi(int)
fiyat(float)
yazarAdi(string)
basimYili(int)

İstenenler:

1- yazarAdi ve basimYili için constructor yazınız.
2- kitapAdi, sayfaSayisi ve fiyat için set metodu yazınız.
3- new ile dinamik olarak bir nesne oluşturunuz.
4- pointer kullanarak bilgileri atayınız.
5- nesne bilgileri main içinde ekrana yazdırınız.
6- nesnenin bellek adresini ekrana yazdırınız.
7- program sonunda belleği serbest bırakınız.

*/

#include <iostream>
using namespace std;

class Kitap{
    private:
    string kitapAdi;
    int sayfaSayisi;
    float fiyat;
    string yazarAdi;
    int basimYili;
    
    public:
    Kitap(string ya, int by){
        yazarAdi=ya;
        basimYili=by;
    }
    
    void setKitapAdi(string ka){
        kitapAdi=ka;
    }
    void setSayfaSayisi(int ss){
        sayfaSayisi=ss;
    }
    void setFiyat(float f){
        fiyat=f;
    }
    void yazdir(){
        cout<<"Kitap Adı: "<<kitapAdi<<endl;
        cout<<"Sayfa Sayısı: "<<sayfaSayisi<<endl;
        cout<<"Fiyat: "<<fiyat<<endl;
        cout<<"Yazar Adı: "<<yazarAdi<<endl;
        cout<<"Basım Yılı: "<<basimYili<<endl;
    }
    
    
};

int main(){
    Kitap* Kitapptr = new Kitap("Charles Perrault", 1697);
    
    Kitapptr->setKitapAdi("Kırmızı Başlıklı Kız");
    Kitapptr->setSayfaSayisi(32);
    Kitapptr->setFiyat(15000);
    
    Kitapptr->yazdir();
    
    cout<<"Nesne belleğinin adresi: "<<Kitapptr<<endl;
    
    delete Kitapptr;
}