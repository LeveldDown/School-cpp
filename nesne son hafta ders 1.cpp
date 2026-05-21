/*
#include <iostream>
using namespace std;

class Koordinat{
    private:
    int x;
    int y;
    
    public:
    
    Koordinat(int a=0, int b=0){
        x = a;
        y = b;
    }
    void yazdir(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    Koordinat operator+(Koordinat k){
        
        Koordinat gecici;
        gecici.x = x + k.x;
        gecici.y = y + k.y;
        return gecici;
    }
};
int main(){
    Koordinat k1(2,3);
    Koordinat k2(5,4);
    
    Koordinat sonuc = k1 + k2;
    sonuc.yazdir();
}
*/

operatör aşırı yükleme teori çıkar. ama kodda sormayacak.
hata ayıklama konusunda kod verip doldurmanı isteyebilir yada direk çıktıyı sorabilir.
kalıtım kesin olacak.
diamond probleme dikkat et.
sanal sınıf kesin var
sanal sınıftan nesne oluşturulur mu oluşturulmaz mı vs.
çoklu kalıtım olabilir ya da çok seviyeli kalıtım, belki ikisi de
vizedeki gibi 2 soru ayrıca 2 soru daha olabilir
hata ayıklama sorabilir çıktısına baktırabilir.
constructor yukardan aşağı destructor aşağıdan yukarı çalışır bil
pointerları bil
çok basit kısa bir header sorusu da olabilir(yazdığın bir kısmın header kısmını yaz. gibi)
(ya da ayrı ayrı yazacak olsaydın header dosyası nasıl olurdu tarzı bir soru olabilir)
