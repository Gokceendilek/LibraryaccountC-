#include <iostream>
#include <string.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

struct Hesap{
	public:
		int telno;
		string adsoyad;
		  string email;
  string sifre;

};
		
Hesap hesaplar[100];

void hesapOlustur() {
  string email, sifre;
  int index = 0;

  while (hesaplar[index].email != "") {
    index++;
  }

  cout << "Lütfen olusturulacak hesap için e-mail adresini girin: ";
  cin >> email;

  cout << "Lütfen oluþturulacak hesap için þifreyi girin: ";
  cin >> sifre;

  hesaplar[index].email = email;
  hesaplar[index].sifre = sifre;

  cout << "Hesap baþarýyla oluþturuldu." << endl;
}

void hesabaGir() {
  string email, sifre;

  cout << "Lütfen e-mail adresinizi girin: ";
  cin >> email;

  cout << "Lütfen sifrenizi girin: ";
  cin >> sifre;

  for (int i = 0; i < 100; i++) {
    if (hesaplar[i].email == email && hesaplar[i].sifre == sifre) {
      cout << "Giris baþarýlý. Hoþgeldiniz." << endl;
      return;
    }
  }

  cout << "E-mail adresi veya sifre yanlýþ. Lütfen tekrar deneyin." << endl;
}
		


class Kutuphaneci: public Hesap{
	public:
		int yetkiliNo;
		
		void HesapOlustur(){
			
		}
		
		void KiralamaYap(){
			
		}
};

class Kullanici: public Hesap{
	public:
		int yetkiliNo;
		
		void KiralamaSonlandir(){
			
		}
		
		void KiralamaYap(){
			
		}
};


int main() {
	int secim;

  do {
    cout << "Ýþlem seçin:" << endl;
    cout << "1. Hesap oluþtur" << endl;
    cout << "2. Hesaba giris yap" << endl;
    cout << "0. Çýkýs" << endl;

    cin >> secim;

    switch (secim) {
      case 1:
        hesapOlustur();
        break;
      case 2:
        hesabaGir();
        break;
      case 0:
        break;
      default:
        cout << "Geçersiz iþlem." << endl;
       
        break;
    }

  } while (secim != 0);

	return 0;
}
