#pragma once

#include <iostream>
using namespace std;

class Ogrenci {
private:
	int id;
	int sinavNot;
	string ad;
public:
	Ogrenci(int _id, string _ad, int _sinavNotu);

	void setId(int _id);
	void setSinavNot(int _sinavNot);
	void setAd(string _ad);

	int getId();
	int getSinavNot();
	string getAd();

	void bilgileriYaz();
};