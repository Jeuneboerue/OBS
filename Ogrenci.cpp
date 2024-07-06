#include "Ogrenci.h"

Ogrenci::Ogrenci(int _id, string _ad, int _sinavNotu) {
	id = _id;
	ad = _ad;
	sinavNot = _sinavNotu;
}

void Ogrenci::setId(int _id) {
	id = _id;
}

void Ogrenci::setAd(string _ad) {
	ad = _ad;
}

void Ogrenci::setSinavNot(int _sinavNot) {
	sinavNot = _sinavNot;
}

int Ogrenci::getId() {
	return id;
}
int Ogrenci::getSinavNot() {
	return sinavNot;
}
string Ogrenci::getAd() {
	return ad;
}

void Ogrenci::bilgileriYaz() {
	cout << "ID: " << id << " Ad: " << ad << " Sinav Notu: " << sinavNot << endl;
}
