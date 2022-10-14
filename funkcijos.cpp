#include "funkcijos.hpp"

string pazGeneravimas() {
    vector<string> paz;
    for (int i = 0; i < 5; i++) {
        paz.push_back(std::to_string(rand() % 10 + 1) + " ");
    }
    string p = std::accumulate(paz.begin(), paz.end(), std::string(""));
    return p;
};

void gen(int x) {
    Timer t;
    string name = "stud" + std::to_string(x) + string(".txt");
    ofstream failas(name);
    failas << "\tVardas" << "\tPavarde" << "\t Pazymiai" << endl;
    for (int i = 1; i < x + 1; i++) {
        failas << "\tVardas" << i << "\tPavarde" << i << " " << pazGeneravimas() << endl;
    }
    cout << "Failo is " << x << " irasu sukurimo laikas:" << t.elapsed() << endl;
};

vector<duom> nusk(int x) {
    Timer t;
    string name = "stud" + std::to_string(x) + string(".txt");
    std::ifstream failas(name);
    vector<duom> stud;
    if (failas.is_open()) {
        string eil;
        vector<int> paz;
        int p;
        int n = 4;
        std::stringstream s(eil);
        while (getline(failas, eil)) {
            duom asmuo;
            failas >> asmuo.vardas;
            failas >> asmuo.pavarde;
            for (int i = 0; i < n; i++) {
                failas >> p;
                paz.push_back(p);
            }
            failas >> asmuo.egz;
            double vid = double(accumulate(paz.begin(), paz.end(), 0)) / 4;
            asmuo.gal = vid * 0.4 + asmuo.egz * 0.6;
            stud.push_back(asmuo);
            paz.clear();
        }
        failas.close();
        cout << "Failo is " << x << " irasu nuskaitymo laikas:" << t.elapsed() << endl;
    } else cout << "Klaida atidarant faila";
    return stud;

};

void isv(vector<duom> v, string x) {
    duom asmuo;
    Timer t;
    vector<duom> m;
    vector<duom> n;
    for (int i = 0; i < v.size() - 1; i++) {
        asmuo = v[i];
        if (asmuo.gal >= 5.0) {
            m.push_back(asmuo);
        } else n.push_back(asmuo);
    }
    cout << "Studentu isskirstymas i 2 grupes uztruko:" << t.elapsed() << endl;
    t.reset();
    ofstream f1("moksliukai" + x);
    ofstream f2("nevykeliai" + x);
    for (int i = 0; i < m.size(); i++) {
        asmuo = m[i];
        f1 << left << setw(15) << asmuo.vardas
           << left << setw(15) << asmuo.pavarde << left << setw(15) << asmuo.gal << endl;
    }
    for (int i = 0; i < n.size(); i++) {
        asmuo = n[i];
        f2 << left << setw(15) << asmuo.vardas
           << left << setw(15) << asmuo.pavarde << left << setw(15) << asmuo.gal << endl;
    }
    cout << "Studentu isskirstymas i 2 failus uztruko:" << t.elapsed() << endl;
};
