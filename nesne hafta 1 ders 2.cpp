/*kullanıcıdan tam sayı alın.
sayı çift ise çift tek ise tek yazın.
koşul operatörü ile yap bunu (? :)
*/
/*
#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"please enter a number: "<<endl;
    cin>>x;
    
    cout<<"the number you have given is: "<<(x % 2 == 0 ? "plural":"odd")<<endl;
}
*/
/*kullanıcıdan 3 tam sayı alınız. Girilen sayıların en az ikisi pozitifse ekrana
"koşul sağlandı" değilse "koşul sağlanmadı" yazdıran C++ programını yazınız.
(if-else ve &&-|| kullanınız.)*/
/*
#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<<"please enter 3 numbers: "<<endl;
    cin>>x>>y>>z;
    
    if((x>0 && y>0)||(x>0 && z>0)||(y>0 && z>0)){
        cout<<"kosul saglandi"<<endl;
    }
    else{
        cout<<"kosul saglanmadi"<<endl;
    }
}
*/
/*kullanıcıdan bir tam sayı alınız. girilen sayının 10 ile 50 arasında olup olmadığını
bir "bool" değişkende tutunuz ve sonuca göre ekrana "Aralik içinde" ya da "aralık dışında"
yazdırınız. (bool, &&, if-else kullanınız.)*/
/*
#include <iostream>
using namespace std;

int main(){
    cout<<"lutfen bir tam sayi giriniz: "<<endl;
    int x;
    cin>>x;
    
    bool aralik = (x>=10 && x<=50);
    
    if(aralik == 1){
        cout<<"aralik icinde"<<endl;
    }
    else{
        cout<<"aralik disinda"<<endl;
    }
}
*/
/*Kullanıcıdan bir tam sayı alınız. Sayının negatif olup olmadığını bir bool değişkende tutarak
koşullu operatör (? :)ile "negatif" ya da "pozitiftir" şeklinde ekrana yazdırınız.
(bool ve ? : birlikte kullanılacaktır.)*/
/*
#include <iostream>
using namespace std;

int main(){
    cout<<"lutfen bir tam sayi giriniz: "<<endl;
    int x;
    cin>>x;
    
    bool sayi = (x>0);
    cout<<(sayi? "pozitiftir" : "negatiftir");
    
    return 0;
}
*/
/*Kullanıcıdan bir pozitif tam sayı alınız. 1'den girilen sayıya kadar olan çift sayıları
ekrana yazdıran C++ programını yazınız. (for döngüsü kullanınız.)*/
/*
#include <iostream>
using namespace std;

int main(){
    cout<<"lutfen pozitif bir tam sayi giriniz: "<<endl;
    int x;
    cin>>x;
    
    for(int i=1; i<=x; i++){
        if(i%2==0){
            cout<<i<<" "<<endl;
        }
    }
}
*/
/*Kullanıcıdan bir tam sayı alınız. 0’dan bu sayıya kadar olan sayılar içinde
3’e tam bölünenlerin adedini bulan ve ekrana yazdıran C++ programını yazınız.*/
/*
#include <iostream>
using namespace std;

int main(){
    cout<<"lutfen bir sayi giriniz: "<<endl;
    int x;
    int adet=0;
    cin>>x;
    
    for(int i=0; i<=x; i++){
        if(i%3==0){
            adet++;
        }
    }
    cout<<adet<<endl;
}
*/
//Kullanıcıdan bir tam sayı alınız. Bu sayının basamak sayısını while döngüsü kullanarak bulan ve ekrana yazdıran C++ programını yazınız.
/*
#include <iostream>
using namespace std;

int main(){
    int x, basamak=0;
    cin>>x;
    if(x>0){
        while(x>0){
        x=x/10;
        basamak++;
        }
    }
    else if(x<0){
        while(x<0){
            x=x/10;
            basamak++;
        }
    }
    else{
        basamak=1;
    }
    cout<<basamak<<endl;
}
*/
/*Kullanıcıdan bir tam sayı alınız. 1’den girilen sayıya kadar olan sayılar içinde en az bir
tane 5’in katı olup olmadığını kontrol ediniz. Bu durumu bir bool bulundu değişkeni ile takip ediniz.*/
/*
#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    
    for(int i=0; i<=x; i++){
        if(i%5=0){
            cout<<var<<endl;
        }
    }
}
*/