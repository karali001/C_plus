#include<iostream>

using namespace std;
void  printArray(const int *ptr1 , const int *ptr2)
{// burdak� *ptr1 gosterd�g� degere� deg�st�remez.Yani ordak� deger� deg�st�remezd�k.

    for(;ptr1!=ptr2;ptr1++){
        cout << "Eleman:"<< *ptr1<< endl;
    }
}
int main() {
int arrayy[]={10,20,30,40,50,60,70,80,90,100};


printArray(arrayy+2,arrayy+7);


return 0;
}
