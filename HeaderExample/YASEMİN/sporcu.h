#pragma once
#ifndef SPORCU_H
#define SPORCU_H
#include<string>
#include<iostream>
using namespace std;


class sporcu {
public:
	sporcu();
	/*sporcu(string, string);*/
	void set�sim(string a) {
		this->isim = a;
	}
	void set�lke(string b) {
		this->�lke = b;
	}
	string get�sim() {
		return isim;
	}
	string get�lke() {
		return �lke;
	}
	
protected:
	string �lke;
	string isim;

};
sporcu::sporcu() {
	string a, b;
	cout << "Patencinin ismini giriniz:";
	cin >> a;
	this->isim = a;
	cout << "Patencinin ulkesini giriniz:";
	cin >> b;
	this->�lke = b;

}
//sporcu::sporcu(string a, string b) {
//	this->isim = a;
//	this->�lke = b;
//}

#endif // !SPORCU_H
