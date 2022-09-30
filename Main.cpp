#include "mano_lib.hpp"
#include "funkcijos.hpp"

int main() {
    duom asmuo1;
    vector<duom> stud;
    int n, m;
    string com1, com2, com3;
    cout << "Duomenis nuskaityti is failo? (T/N):";
    cin >> com3;
    while (com3 != "T" && com3 != "t" && com3 != "N" && com3 != "n") {
        cout << "Negaliojantis pasirinkimas, bandykite dar karta:";
        cin >> com3;
    }
    if (com3 == "T" || com3 == "t") { nuskaitymas(); }
    else {
        cout << "Pazymius generuoti atsitiktinai? (T/N):";
        cin >> com1;
        while (com1 != "T" && com1 != "t" && com1 != "N" && com1 != "n") {
            cout << "Negaliojantis pasirinkimas, bandykite dar karta:";
            cin >> com1;
        }
        if (com1 == "N" || com1 == "n") {
            for (int i = 0; i < n; i++) { stud.push_back(ivedimas(m)); }
        } else {
            for (int i = 0; i < n; i++) { stud.push_back(generavimas(m)); }
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
        for (int i = 0; i < n; i++) {
            isvedimasVid(stud[i], m);
        }
    } else {
        cout << left << setw(15) << "Vardas" << left << setw(15) << "Pavarde" << left << setw(20) <<
             "Galutinis(med.)" << endl;
        for (int i = 0; i < n; i++) {
            isvedimasMed(stud[i], m);
        }
    }
}
