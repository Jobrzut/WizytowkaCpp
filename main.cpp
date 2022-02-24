#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int dzien, miesiac, rok;
string imie, nazwisko;

int main() {
	cout << "Jak masz na imie: ";
	cin >> imie;
	cout << "Jak masz na nazwisko: ";
	cin >> nazwisko;
	cout << "Podaj dzien urodzenia: ";
	cin >> dzien;
	if (dzien > 31) {
		cout << "No chyba nie jak miesiac ma 31 dni" << endl;
		return 0;
	}
	else {
	cout << "Podaj miesiac urodzenia: ";
	cin >> miesiac;
	if (miesiac > 12) {
		cout << "No chyba nie jak rok ma 12 miesiecy" << endl;
		return 0;
	}
	else {
	cout << "Podaj rok urodzenia: ";
	cin >> rok;
	ofstream dane ("dane.txt");
	dane << imie << endl;
	dane << nazwisko << endl;
	if(miesiac < 10) {
		dane << dzien << "." << 0 << miesiac << "." << rok << endl;
	}
	else {
		dane << dzien << "." << miesiac << "." << rok << endl;
	}
	dane.close();

    cout << "          " << endl;
	cout << "WIZYTOWKA" << endl;

    fstream wyciag;
    wyciag.open("dane.txt");
    string linia;
    do {
        getline(wyciag, linia);
        cout << linia << endl;
    }
    while(linia != "");
    wyciag.close();

		}
	}
}
