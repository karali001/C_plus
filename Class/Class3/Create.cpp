#include<iostream>
#include"Create.h"

using namespace std;

Create::Create(int �d, string massege)
	:ObjectId(�d), message(massege) {
	cout << "object" << ObjectId << "constract�on run" << message << endl;
}
Create::~Create()
{
	cout << "object" << ObjectId << "destructon" << message << endl;
}

Create first(1, "enes");
int main() {

	Create second(2, "ali");
	static Create tree(3, "veli");
	return 0;
	// ilk normaller sonra stat�kler sonra global nesneler y�k�l�r.
	//en en basta fonksiyon ile olu�turulan nesneler y�k�l�r cunku fonks�yonun �s� b�t�nce fonks�yon
	//kapat�lacag� �c�n nesneler�n�de otamat�k olarak y�kmak zorunda kalacakt�r.
}