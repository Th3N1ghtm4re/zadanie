#include <iostream>
#include <string>

using namespace std;

class Wlasciciel {
private:
    string imie;
    string nazwisko;
    int wiek;
    string numerTelefonu;
    string email;

public:
    Wlasciciel(string _imie, string _nazwisko, int _wiek, string _numerTelefonu, string _email)
        : imie(_imie), nazwisko(_nazwisko), wiek(_wiek), numerTelefonu(_numerTelefonu), email(_email) {}

    void wyswietlDane() {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Wiek: " << wiek << endl;
        cout << "Numer telefonu: " << numerTelefonu << endl;
        cout << "Email: " << email << endl;
    }
};

class Adres {
private:
    string ulica;
    string miasto;
    int numerBudynku;

public:
    Adres() {}
    Adres(string _ulica, string _miasto, int _numerBudynku)
        : ulica(_ulica), miasto(_miasto), numerBudynku(_numerBudynku) {}

    void ustawAdres(string _ulica, string _miasto, int _numerBudynku) {
        ulica = _ulica;
        miasto = _miasto;
        numerBudynku = _numerBudynku;
    }

    void wyswietlAdres() {
        cout << "Adres: " << ulica << " " << numerBudynku << ", " << miasto << endl;
    }
};

class Blok {
private:
    Adres adres;
    int liczbaMieszkan;
    Wlasciciel wlascicielBudynku;

public:
    Blok(Adres _adres, int _liczbaMieszkan, Wlasciciel _wlascicielBudynku)
        : adres(_adres), liczbaMieszkan(_liczbaMieszkan), wlascicielBudynku(_wlascicielBudynku) {}

    void wyswietlDane() {
        cout << "Liczba mieszkań: " << liczbaMieszkan << endl;
        adres.wyswietlAdres();
        cout << "Właściciel bloku:" << endl;
        wlascicielBudynku.wyswietlDane();
    }
};

class Mieszkanie {
private:
    int numerMieszkania;
    float powierzchnia;
    int liczbaPokoi;
    float czynsz;
    Wlasciciel wlascicielMieszkania;

public:
    Mieszkanie(int _numerMieszkania, float _powierzchnia, int _liczbaPokoi, float _czynsz, Wlasciciel _wlascicielMieszkania)
        : numerMieszkania(_numerMieszkania), powierzchnia(_powierzchnia), liczbaPokoi(_liczbaPokoi), czynsz(_czynsz), wlascicielMieszkania(_wlascicielMieszkania) {}

    void wyswietlDane() {
        cout << "Numer mieszkania: " << numerMieszkania << endl;
        cout << "Powierzchnia: " << powierzchnia << " m^2" << endl;
        cout << "Liczba pokoi: " << liczbaPokoi << endl;
        cout << "Czynsz: " << czynsz << " zł" << endl;
        cout << "Właściciel mieszkania:" << endl;
        wlascicielMieszkania.wyswietlDane();
    }
};

int main() {
    Wlasciciel wlascicielBudynku("Jan", "Kowalski", 40, "123456789", "jan.kowalski@example.com");
    Adres adresBudynku("Kwiatowa", "Warszawa", 10);
    Blok blok(adresBudynku, 5, wlascicielBudynku);
    blok.wyswietlDane();

    cout << endl;

    Wlasciciel wlascicielMieszkania("Anna", "Nowak", 35, "987654321", "anna.nowak@example.com");
    Mieszkanie mieszkanie(1, 60.0, 3, 1500.0, wlascicielMieszkania);
    mieszkanie.wyswietlDane();

    return 0;
}
