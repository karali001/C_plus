#pragma once
#ifndef YUZMETREKOSUCU_H
#define YUZMETREKOSUCU_H
#include<iostream>
#include<string>
#include"atlet.h"

using namespace std;
static int  kazananBitisZaman� = 9999;
static string kazanan�sim;
class YuzMetreKosucu :public atlet {
public:
	int BitisZamaniS;

	YuzMetreKosucu();
	void sonuc();
	void  setBitisZamani(int a) {
		this->BitisZamaniS =a;
	}
	int BitisZamani() {
		return this->BitisZamaniS;
	}

	
};
YuzMetreKosucu::YuzMetreKosucu() {
	string a;
	string b;
	string c;
	int tutucu2;
	cout << "isim giriniz:";
	cin >> a;
	cout << endl;
	set�sim(a);
	cout << "ulke giriniz:";
	cin >> b;
	cout << endl;
	set�lke(b);
	cout << "Cinsiyet giriniz(K/E):";
	cin >> c;
	cout << endl;
	setCinsiyet(c);
	cout << "DEGERI GIRINIZ:";
	cin >> tutucu2;
	setBitisZamani(tutucu2);
	if (kazananBitisZaman� > BitisZamaniS) {
		kazananBitisZaman� = BitisZamaniS;
		kazanan�sim = this->isim;
	}

}
void YuzMetreKosucu::sonuc() {
	cout << "Altin madalya kazanan�n suresi:" << kazananBitisZaman� << endl;
	cout << "Kazanan kosucu:" << kazanan�sim;

}

#endif // !YUZMETREKOSUCU_H
