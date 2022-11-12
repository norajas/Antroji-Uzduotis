#include "funkcijos.hpp"

int main() {
    duom asmuo1;
    vector<duom> studentai;
    vector<duom> a, b, c, d, e;
    list<duom> f, g, h, j, k;
    int n, m;
    string com1, com2, com3, com4, com5;
    cout << "Vykdyti spartos testa? (T/N):";
    cin >> com5;
    while (com5 != "T" && com5 != "t" && com5 != "N" && com5 != "n") {
        cout << "Negaliojantis pasirinkimas, bandykite dar karta:";
        cin >> com5;
    }
    if (com5 == "T" || com5 == "t") {
        cout << left << setw(25) << "Irasu skaicius faile" << left << setw(15) << "List"
        << left << setw(15) << "Vector" << endl;
        cout << left << setw(25) << "1000"
             << left << setw(15) << nusk(1000) << left << setw(15) << nusk_vect(1000) << endl;
        cout << left << setw(25) << "10000"
             << left << setw(15) << nusk(10000) << left << setw(15) << nusk_vect(10000) << endl;
        cout << left << setw(25) << "100000"
             << left << setw(15) << nusk(100000) << left << setw(15) << nusk_vect(100000) << endl;
        cout << left << setw(25) << "1000000"
             << left << setw(15) << nusk(1000000) << left << setw(15) << nusk_vect(1000000) << endl;
        cout << left << setw(25) << "10000000"
             << left << setw(15) << nusk(10000000) << left << setw(15) << nusk_vect(10000000) << endl;
        cout << endl;

    }
    cout << "Generuoti failus? (T/N):";
    cin >> com4;
    while (com4 != "T" && com4 != "t" && com4 != "N" && com4 != "n") {
        cout << "Negaliojantis pasirinkimas, bandykite dar karta:";
        cin >> com4;
    }
    if (com4 == "T" || com4 == "t") {
        int a;
        cout << "Kiek studentu duomenu generuoti?";
        cin >> a;
        gen(a);
    }
    cout << "Duomenis nuskaityti is failo? (T/N):";
    cin >> com3;
    while (com3 != "T" && com3 != "t" && com3 != "N" && com3 != "n") {
        cout << "Negaliojantis pasirinkimas, bandykite dar karta:";
        cin >> com3;
    }
    if (com3 == "T" || com3 == "t") { nuskaitymas(); }
    else {
        cout << "Iveskite studentu skaiciu:";
        cin >> n;
        cout << "Pazymius generuoti atsitiktinai? (T/N):";
        cin >> com1;
        while (com1 != "T" && com1 != "t" && com1 != "N" && com1 != "n") {
            cout << "Negaliojantis pasirinkimas, bandykite dar karta:";
            cin >> com1;
        }
        if (com1 == "N" || com1 == "n") {
            for (int i = 0; i < n; i++) { studentai.push_back(ivedimas(m)); }
        } else {
            for (int i = 0; i < n; i++) { studentai.push_back(generavimas(m)); }
        }
    }
    cout << "Galutini bala skaiciuoti pagal vidurki ar mediana? (V/M):";
    cin >> com2;
    while (com2 != "V" && com2 != "v" && com2 != "M" && com2 != "m") {
        cout << "Negaliojantis pasirinkimas, bandykite dar karta:";
        cin >> com2;
    }
    if (com2 == "V" || com2 == "v") {
        cout << left << setw(15) << "Vardas" << left << setw(15) << "Pavarde" << left << setw(20) <<
             "Galutinis(vid.)" << endl;
        for (duom a : studentai) {
            isvedimasVid(a, m);
        }
    } else {
        cout << left << setw(15) << "Vardas" << left << setw(15) << "Pavarde" << left << setw(20) <<
             "Galutinis(med.)" << endl;
        for (duom a : studentai) {
            isvedimasMed(a, m);
        }
    }
}
