#include<iostream>
using namespace std ;


int main(){

int a, b;
string islem;

cout<< "Hesap makinesi pragramina hosgeldiniz..."<< endl;
cout << "1. �slem : Toplma islemi"<< endl;
cout << "2. �slem : C�karma islemi"<< endl;
cout << "3. �slem : Carpma islemi"<< endl;
cout << "4. �slem : Bolme islemi"<< endl;

cout<< "Islemi giriniz:";
cin >> islem;

if(islem=="1"){
    cout<< "a:";
    cin>> a;
    cout << "b:";
    cin >> b;
    cout<<"Toplamlar�:"<<a+b<< endl;
}
else if(islem=="2"){
    cout<< "a:";
    cin>> a;
    cout << "b:";
    cin >> b;
    cout<<"Farklari:"<<a-b<< endl;

}
else if(islem=="3"){
     cout<< "a:";
    cin>> a;
    cout << "b:";
    cin >> b;
    cout<<"Carpimi:"<<a*b<< endl;

}
else if(islem=="4"){
    cout<< "a:";
    cin>> a;
    cout << "b:";
    cin >> b;
    cout<<"Bolumu:"<<(float)a/b<< endl;

}
else {
    cout<<"Gecersiz islem...";
}

return 0;
}
