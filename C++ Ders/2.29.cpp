#include<iostream>
using namespace std;
struct employee {
int id;
string name;
string department ;
};
int main() {

employee employee1 = {12,"Enes","Bilgisayar muh."};

employee * ptr = &employee1;

cout << employee1.department << endl;// obje uzer�nden struct ulasma
cout << ptr->department << endl;// po�nter �le struct cag�rma


return 0;
}
