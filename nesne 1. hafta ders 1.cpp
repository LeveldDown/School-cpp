/*
#include <iostream>
using namespace std;

int main(){
    int c;
    cout << "Bir tam sayi giriniz: ";
    cin >> c;
}
*/
/*SORU 1: Kullanıcıdan alınan bir tam sayının pozitif, negatif veya sıfır olma durumunu
          if-else blokları kullanarak ekrana yazdıran C++ programını yazınız. */
/*
#include <iostream>
using namespace std;

int main(){
    cout<<"lütfen bir sayı giriniz: ";
    int x;
    cin>>x;
    
    if(x>0){
        cout<<"sayı pozitiftir."<<endl;
    }
    else if(x<0){
        cout<<"sayı negatiftir."<<endl;
    }
    else{
        cout<<"sayı sıfırdır."<<endl;
    }
}
*/

/*SORU 2: Kullanıcıdan alınan iki tam sayıdan en az birinin 10’dan büyük olup olmadığını || 
          mantıksal operatörünü kullanarak kontrol eden C++ programını yazınız.*/
/*#include <iostream>
using namespace std;

int main(){
    cout<<"lütfen 2 sayı giriniz: "<< endl;
    int x,y;
    cin>>x>>y;
    
    if(x>10 || y>10){
        cout<<"koşul sağlanıyor"<<endl;
    }
    else{
        cout<<"koşul sağlanmadı"<<endl;
    }
}
*/

/*SORU 3: Kullanıcıdan alınan bir tam sayıyı önce 1 artırıp (++), 
          daha sonra bu değerin 2 katını ekrana yazdıran C++ programını yazınız.*/
/*#include <iostream>
using namespace std;

int main(){
    cout<<"lütfen bir sayı giriniz: "<<endl;
    int x;
    cin>>x;
    
    x++;
    
    cout<<"1 arttırılmış x değerinin 2 katı = "<< x*2;
    
    return 0;
}
*/
/*SORU 4: Kullanıcıdan alınan iki tam sayıdan büyük olanı
koşullu operatör (? :) kullanarak bulan ve ekrana yazdıran C++ programını yazınız.
*/
/*
#include <iostream>
using namespace std;

int main(){
    cout<<"2 tane sayı giriniz: "<<endl;
    int x,y;
    cin>>x>>y;
    
    int c= (x>y)? x:y ;
    cout<<"girilen 2 sayıdan büyük olan = "<<c;
    
    return 0;
}
*/
