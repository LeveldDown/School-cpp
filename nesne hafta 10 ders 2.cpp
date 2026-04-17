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
    
    float dikHacim = (*uzunluk)*(*genislik)*(*yukseklik);
    float daireAlan = pi*(*yaricap)*(*yaricap);
    
    cout<<"Dikdörtgenler prizmasının hacmi: "<<dikHacim<<endl;
    cout<<"Dairenin alanı: "<<daireAlan<<endl;
    
    cout<<"Bellek adresleri:"<<endl;
    
    adresYazdir("Uzunluk", uzunluk);
    adresYazdir("Genişlik", genislik);
    adresYazdir("Yükseklik", yukseklik);
    adresYazdir("Yarıçap", yaricap);
}