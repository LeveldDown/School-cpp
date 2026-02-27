/*Soru: Bir ouyun için Karakter sınıfı oluşturunuz.
Özellikler (Attributes):
●isim => karakterin adı
●can => başlangıçta 100
●saldiri_gucu => başlangıçta belirlenecek
●seviye => başlangıçta 1
●puan => başlangıçta 0
Metodlar:
●bilgileri_goster() => karakterin tüm bilgilerini ekrana yazdırır
●canli_mi() => karakterin canı 0'dan büyükse true, değilse false
döndürür
●seviye_atla() => seviyeyi 1 artırır, saldiri_gucunu 10 artırır ve
ekrana mesaj yazar
Görevler:
I. Biri kahraman, biri canavar olacak şekilde Karakter sınıfından
2 nesne oluşturunuz.
(kahramanın saldırı gücü 25 ve canavarın saldırı gücü 15)
II. Aşağıdaki kurallara göre main içinde 4 saldırı
gerçekleştiriniz:
A. Her saldırıdan önce her iki karakterin de canli_mi()
kontrolünü yap
B. Saldırı gerçekleşirse canavarın canını azaltıp ekrana
yazdırın (saldırıdan sonra canavar ölürse puan hesapla ve
kahramanın puanına ekle)
III. Puan hesaplama kuralı:
A. Canavarın seviyesi 3 veya üstüyse => 100 puan
B. Canavarın seviyesi 2 ise => 50 puan
C. Canavarın seviyesi 1 ise => 25 puan
IV. Canavar yenilince kahraman seviye atlasın
V. Oyun sonunda kahramanın tüm bilgilerini ekrana yazdırın
Beklenen çıktı :
Kahraman Canavar'i vurdu! Canavar'in cani: 75
Kahraman Canavar'i vurdu! Canavar'in cani: 50
Kahraman Canavar'i vurdu! Canavar'in cani: 25
Kahraman Canavar'i vurdu! Canavar'in cani: 0
Canavar yenildi! Kahraman 25 puan kazandi! Toplam puan: 25
Kahraman seviye atladi! Yeni seviye: 2
--- OYUN SONU ---
--- Kahraman Bilgileri ---
Isim: Kahraman - Can: 100 - Saldiri: 35 - Seviye: 2 - Puan: 25
*/
#include <iostream>
using namespace std;

class karakter{
    
    public:
    
    string isim;
    int hp;
    int saldiri_gucu;
    int seviye;
    int puan;
    
    karakter(string i, int c, int ap){
        isim=i;
        hp=c;
        saldiri_gucu=ap;
        seviye=1;
        puan=0;
        
    }
    
    void bilgileriGoster(){
        cout<<"kahraman adı: "<<isim<<" can: "<<hp<<" güç: "<<saldiri_gucu<<" seviye: "<<seviye<<" puan: "<<puan<<endl;
    }
    bool canliMi() {
        return hp > 0;
    }
    void seviye_atla(){
        seviye++;
        saldiri_gucu +=10;
        cout<<"Kahraman seviye atladı! Şuanki seviye: "<<seviye<<endl;
    }

    
};

int main(){
    
    karakter Kahraman("Patates", 100, 25);
    karakter Canavar("kürek", 75, 15);
    
    for(int i=0; i<4; i++){
        if(Kahraman.canliMi() && Canavar.canliMi()){
            
            Canavar.hp -= Kahraman.saldiri_gucu;
            cout<<"Patates saldırdı! Kürek'in canı: "<<Canavar.hp<<endl;
        }
        else{
            Kahraman.seviye_atla();
            Kahraman.bilgileriGoster();
        }
    }
    
}