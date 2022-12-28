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

  cout << "L�tfen olusturulacak hesap i�in e-mail adresini girin: ";
  cin >> email;

  cout << "L�tfen olusturulacak hesap i�in �ifreyi girin: ";
  cin >> sifre;

  hesaplar[index].email = email;
  hesaplar[index].sifre = sifre;

  cout << "Hesap ba�ar�yla olu�turuldu." << endl;
}

void hesabaGir() {
  string email, sifre;

  cout << "L�tfen e-mail adresinizi girin: ";
  cin >> email;

  cout << "L�tfen sifrenizi girin: ";
  cin >> sifre;

  for (int i = 0; i < 100; i++) {
    if (hesaplar[i].email == email && hesaplar[i].sifre == sifre) {
      cout << "Giris ba�ar�l�. Ho�geldiniz." << endl;
      return;
    }
  }

  cout << "E-mail adresi veya sifre yanl��. L�tfen tekrar deneyin." << endl;
}

int main()
{
  int secim;

  do {
    cout << "�slem secin:" << endl;
    cout << "1. Hesap olu�tur" << endl;
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
        cout << "Gecersiz i�lem." << endl;
       
        break;
    }

  } while (secim != 0);

  return 0;
}

