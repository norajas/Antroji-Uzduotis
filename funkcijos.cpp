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
    string name = "stud" + std::to_string(x) + ".txt";
    ofstream failas(name);
    failas << "\tVardas" << "\tPavarde" << "\t Pazymiai" << endl;
    for (int i = 1; i < x + 1; i++) {
        string info = "\tVardas" + std::to_string(i) + "\tPavarde" + std::to_string(i) + " " + pazGeneravimas() + "\n";
        failas << info;
    }
};

double nusk(int x) {
    Timer t;
    string name = "stud" + std::to_string(x) + ".txt";
    std::ifstream failas(name);
    list<duom> stud;
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
    } else cout << "Klaida atidarant faila";
    list<duom> m;
    list<duom> n;
    for (duom a : stud) {
        if (a.gal >= 5.0) {
            m.push_back(a);
        } else n.push_back(a);
    }
    auto l = t.elapsed();
    ofstream f1("moksliukai_l_" + std::to_string(x));
    ofstream f2("nevykeliai_l_" + std::to_string(x));
    for (duom a : m) {
        f1 << left << setw(15) << a.vardas
           << left << setw(15) << a.pavarde << left << setw(15) << a.gal << endl;
    }
    for (duom a : n) {
        f2 << left << setw(15) << a.vardas
           << left << setw(15) << a.pavarde << left << setw(15) << a.gal << endl;
    }
    m.clear();
    n.clear();
    f1.close();
    f2.close();
    stud.clear();
    return l;
};

double nusk_vect(int x) {
    Timer t;
    string name = "stud" + std::to_string(x) + ".txt";
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
    } else cout << "Klaida atidarant faila";
    vector<duom> m;
    vector<duom> n;
    for (duom a : stud) {
        if (a.gal >= 5.0) {
            m.push_back(a);
        } else n.push_back(a);
    }
    auto l = t.elapsed();
    ofstream f1("moksliukai_v_" + std::to_string(x));
    ofstream f2("nevykeliai_v_" + std::to_string(x));
    for (duom a : m) {
        f1 << left << setw(15) << a.vardas
           << left << setw(15) << a.pavarde << left << setw(15) << a.gal << endl;
    }
    for (duom a : n) {
        f2 << left << setw(15) << a.vardas
           << left << setw(15) << a.pavarde << left << setw(15) << a.gal << endl;
    }
    m.clear();
    n.clear();
    f1.close();
    f2.close();
    stud.clear();
    return l;
};

duom ivedimas(int &n) {
    vector<int> paz;
    int p;
    int sum = 0;
    duom asmuo;
    cout << "Iveskite varda:";
    cin >> asmuo.vardas;
    cout << "Iveskite pavarde:";
    cin >> asmuo.pavarde;
    cout << "Iveskite egzamino pazymi:";
    cin >> asmuo.egz;
    string command = "N";
    while (command != "T" && command != "t") {
        cout << "Iveskite  pazymi:";
        cin >> p;
        paz.push_back(p);
        cout << "Baigti pazymiu ivedima?(T/N)";
        cin >> command;
        cout << endl;
    }
    sum = std::accumulate(paz.begin(), paz.end(), 0);
    sort(paz.begin(), paz.end());
    if ((paz.size() - 1) % 2 == 0) {
        asmuo.med = double(paz[(paz.size() - 1) / 2] + paz[(paz.size() - 1) / 2 + 1]) / 2;
    } else asmuo.med = paz[(paz.size() - 1) / 2];
    asmuo.vid = (double) sum / (double) (paz.size());
    return asmuo;
    paz.clear();
}

duom generavimas(int &n) {
    vector<int> paz;
    int sum, s;
    duom asmuo;
    cout << "Iveskite varda:";
    cin >> asmuo.vardas;
    cout << "Iveskite pavarde:";
    cin >> asmuo.pavarde;
    cout << "Iveskite egzamino pazymi:";
    cin >> asmuo.egz;
    cout << "Iveskite namu darbu pazymiu skaiciu:";
    cin >> s;
    for (int i = 0; i < s; i++) {
        paz.push_back(rand() % 10 + 1);
        cout << "Sugeneruotas pazymys:" << paz.back() << endl;
    }
    sum = accumulate(paz.begin(), paz.end(), 0);
    sort(paz.begin(), paz.end());
    if ((s - 1) % 2 == 0) { asmuo.med = double(paz[(s - 1) / 2] + paz[(s - 1) / 2 + 1]) / 2; }
    else asmuo.med = paz[(s - 1) / 2];
    asmuo.vid = (double) sum / (double) s;
    return asmuo;
    paz.clear();
}

duom nuskaitymas() {
    vector<duom> stud;
    std::ifstream failas;
    string pav;
    failas.open("C:\\Users\\noraj\\CLionProjects\\untitled\\kursiokai.txt");
    if (failas.is_open()) {
        string eil;
        vector<int> paz;
        int p;
        int n = 0;
        getline(failas, eil);
        std::stringstream s(eil);
        string z;
        while (s >> z){
            n += 1;
        }
        n -= 3;
        while (getline(failas, eil)) {
            duom asmuo;
            failas >> asmuo.vardas;
            failas >> asmuo.pavarde;
            for (int i = 0; i < n; i++) {
                failas >> p;
                paz.push_back(p);
            }
            failas >> asmuo.egz;
            asmuo.vid = double(accumulate(paz.begin(), paz.end(), 0)) / n;
            asmuo.med = paz[4 / 2];
            stud.push_back(asmuo);
            paz.clear();
        }
        sort(stud.begin(), stud.end(), [](const duom &a, const duom &b) {
            return a.vardas < b.vardas;
        });

        cout << left << setw(15) << "Vardas" << left << setw(15) << "Pavarde" << left << setw(20) <<
             "Galutinis(vid.)" << left << setw(20) << "Galutinis(med.)" << endl;
        for (auto &i: stud) {
            cout << left << setw(15) << i.vardas
                 << left << setw(15) << i.pavarde
                 << left << setw(20) << setprecision(3) << (i.vid * 0.4 + i.egz * 0.6)
                 << left << setw(20) << setprecision(3) << (i.med * 0.4 + i.egz * 0.6) << endl;
        }
        failas.close();
    } else { cout << "Klaida atidarant faila" << endl; }
}

void isvedimasVid(duom temp, int n) {
    cout << left << setw(15) << temp.vardas
         << left << setw(15) << temp.pavarde
         << left << setw(20) << setprecision(3) << (temp.vid * 0.4 + temp.egz * 0.6) << endl;
}

void isvedimasMed(duom temp, int n) {
    cout << left << setw(15) << temp.vardas
         << left << setw(15) << temp.pavarde
         << left << setw(20) << setprecision(3) << (temp.med * 0.4 + temp.egz * 0.6) << endl;
}
