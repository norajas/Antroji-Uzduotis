#include "funkcijos.hpp"

int main() {
    duom asmuo1;
    list<duom> stud;
    int n, m;
    string com1, com2, com3, com4, com5;
    cout << "Vykdyti programos spartos testa? (T/N):";
    cin >> com4;
    while (com4 != "T" && com4 != "t" && com4 != "N" && com4 != "n") {
        cout << "Negaliojantis pasirinkimas, bandykite dar karta:";
        cin >> com4;
    }
    if (com4 == "T" || com4 == "t") {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 10);
        cout << left << setw(25) << "Irasu skaicius faile" << left << setw(30) << "Vienas naujas konteineris"
             << left << setw(30) << "Du nauji konteineriai" << "\n"
             << left << setw(25) << "" << left << setw(15) << "List" << left << setw(15) << "Vector"
             << left << setw(15) << "List" << left << setw(15) << "Vector" << endl;
        SetConsoleTextAttribute(h, 15);
        cout << left << setw(25) << "1000"
             << left << setw(15) << nusk_list1(1000) << left << setw(15) << nusk_vect1(1000)
             << left << setw(15) << nusk_list2(1000) << left << setw(15) << nusk_vect2(1000) << endl;
        cout << left << setw(25) << "10000"
             << left << setw(15) << nusk_list1(10000) << left << setw(15) << nusk_vect1(10000)
             << left << setw(15) << nusk_list2(10000) << left << setw(15) << nusk_vect2(10000) <<endl;
        cout << left << setw(25) << "100000"
             << left << setw(15) << nusk_list1(100000) << left << setw(15) << nusk_vect1(100000)
             << left << setw(15) << nusk_list2(100000) << left << setw(15) << nusk_vect2(100000) << endl;
        cout << left << setw(25) << "1000000"
             << left << setw(15) << nusk_list1(1000000) << left << setw(15) << nusk_vect1(1000000)
             << left << setw(15) << nusk_list2(1000000) << left << setw(15) << nusk_vect2(1000000) << endl;
        cout << left << setw(25) << "10000000"
             << left << setw(15) << nusk_list1(10000000) << left << setw(15) << nusk_vect1(10000000)
             << left << setw(15) << nusk_list2(10000000) << left << setw(15) << nusk_vect2(10000000) << endl;
        cout << endl;
    }
    cout << "Vykdyti programos spartos testa su skirtingais algoritmais? (T/N):";
    cin >> com5;
    while (com5 != "T" && com5 != "t" && com5 != "N" && com5 != "n") {
        cout << "Negaliojantis pasirinkimas, bandykite dar karta:";
        cin >> com5;
    }
    if (com5 == "T" || com5 == "t") {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 10);
        cout << "\n" << left << setw(25) << "Irasu skaicius faile" << left << setw(20) << "find_if + move"
             << left << setw(20) << "stable_partition" <<  left << setw(20) << "find_if + 2x move"
             << left << setw(20) << "partition_copy" << endl;
        SetConsoleTextAttribute(h, 15);
        cout << left << setw(25) << "100000"
             << left << setw(20) << nusk_vect1(100000) << left << setw(20) << vect_st_part(100000)
             << left << setw(20) << nusk_vect2(100000) << left << setw(20) << vect_partition(100000) << endl;
        cout << left << setw(25) << "1000000"
             << left << setw(20) << nusk_vect1(1000000) << left << setw(20) << vect_st_part(1000000)
             << left << setw(20) << nusk_vect2(1000000)<< left << setw(20) << vect_partition(1000000) << endl;
        exit(0);
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
        for (duom a : stud) {
            isvedimasVid(a, m);
        }
    } else {
        cout << left << setw(15) << "Vardas" << left << setw(15) << "Pavarde" << left << setw(20) <<
             "Galutinis(med.)" << endl;
        for (duom a : stud) {
            isvedimasMed(a, m);
        }
    }
}
