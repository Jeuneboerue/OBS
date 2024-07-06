#include <iostream>
#include "Ogrenci.h"
#include <list>

using namespace std;

void menuGoster() {
	cout << "1 - Yeni Kayit\n";
	cout << "2 - Tum Listeyi Goster\n";
	cout << "3 - Kayit Sil (ID'ye gore)\n";
	cout << "4 - Ogrenci ara\n";
	cout << "5 - Cikis\n";
}

void ogrenciEkle(list<Ogrenci>* lst) {
	
	int id, sinavNot;
	string ad, soyad, isim;

	cout << "ID Giriniz: ";
	cin >> id;
	cout << "Ad Giriniz: ";
	cin >> ad >> soyad;
	isim = ad + " " + soyad;
	cout << "Sinav Notunu Giriniz: ";
	cin >> sinavNot;

	Ogrenci ogr(id, isim, sinavNot);
	lst->push_back(ogr);

}

void listeGoster(list<Ogrenci>* lst) {

	list<Ogrenci>::iterator it;

	cout << "- - - - Tum Ogrencilerin Listesi - - - -\n";

	for (it = lst->begin(); it != lst->end(); it++) {
		
		it->bilgileriYaz();
	}
	cout << endl;
}

void kayitSil(list<Ogrenci>* lst) {
	int id;

	cout << "Silinecek Ogrencinin ID'sini Giriniz: ";
	cin >> id;

	list<Ogrenci>::iterator it;

	for (it = lst->begin(); it != lst->end(); it++) {
		if (it->getId() == id)
			break;
	}

	if (it == lst->end())
		cout << "Belirtilen ID Bulunamadý!!\n";
	else
		lst->erase(it);

}

void ogrenciAra(list<Ogrenci>* lst) {
	int id;

	cout << "Goruntulemek Istediginiz Ogrencinin ID'sini Giriniz: ";
	cin >> id;

	list<Ogrenci>::iterator it;

	for (it = lst->begin(); it != lst->end(); it++) {
		if (it->getId() == id)
			break;
	}

	if (it == lst->end())
		cout << "Aratilan ID'ye Kayitli Bir Ogrenci Bulunamadi!\n";
	else
		it->bilgileriYaz();
	cout << endl;
}

int main() {
	list<Ogrenci>* ogrenciListesi = new list<Ogrenci>();

	int secim = 0;

	do {
		menuGoster();
		cout << "Seciminiz: ";
		cin >> secim;

		switch (secim) {
		case 1:
			ogrenciEkle(ogrenciListesi);
			break;
		case 2:
			listeGoster(ogrenciListesi);
			break;
		case 3:
			kayitSil(ogrenciListesi);
			break;
		case 4:
			ogrenciAra(ogrenciListesi);
			break;
		case 5:
			break;
		default:
			cout << "1 ile 5 arasinda bir sayi giriniz!!\n";
			break;
		}
	} while (secim != 5);
}