#include<iostream>
using namespace std;

int main() {

int secenek,sayi1,sayi2,sonuc;

	cout << " yapmak istediğiniz işlemi seçin\n 1- toplama\n 2- çıkarma \n 3- çarpma\n 4- bölme\n";

	cin >> secenek;
	cout << "1. sayıyı giriniz\n";
	cin >> sayi1;
	cout << "2. sayıyı giriniz\n";
	cin >> sayi2;

	if (secenek == 1) {
		sonuc = sayi1 + sayi2;
		cout << sonuc;
	}
	else if (secenek == 2) {
		sonuc = sayi1 - sayi2;
		cout << sonuc;
	}
	else if (secenek == 3) {
		sonuc = sayi1 * sayi2;
		cout << sonuc;
	}
	else if (secenek == 4) {
		sonuc = sayi1/ sayi2;
		cout << sonuc;

	}
	else {
		cout << "geçersiz işlem";
	}

	return 0;
}