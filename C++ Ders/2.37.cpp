#include<iostream>
using namespace std;

int main() {
int *ptr1 =nullptr;
int *ptr2 =nullptr;

ptr1=new int;
*ptr1=10;
ptr2=ptr1;
delete ptr1;

*ptr2=20;
cout << *ptr2<< endl;
// dangl�ng referansda run t�me hatas� goster�lm�st�r.
return 0;
}
