#include <iostream>
#include <string>

using namespace std;

struct Hesap {
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

  cout << "Lütfen olusturulacak hesap için þifreyi girin: ";
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

int main()
{
  int secim;

  do {
    cout << "Ýslem secin:" << endl;
    cout << "1. Hesap oluþtur" << endl;
    cout << "2. Hesaba giris yap" << endl;
    cout << "0. Cikis" << endl;

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
        cout << "Gecersiz iþlem." << endl;
       
        break;
    }

  } while (secim != 0);

  return 0;
}

