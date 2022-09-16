#include "mano_lib.hpp"

struct duom{
    string vardas;
    string pavarde;
    double vid;
    double med;
    int egz;
};

duom ivedimas(int &n);
duom generavimas(int &n);
void isvedimasVid(duom temp, int n);
void isvedimasMed(duom temp, int n);

int main(){
    duom asmuo1, masyvas[25];
    int n, m;
    string com1, com2;
    cout<<"Iveskite studentu kieki: "; cin>>n;
    cout<< "Pazymius generuoti atsitiktinai? (T/N): "; cin >> com1;
    while (com1!="T" && com1!="t" && com1 != "N" && com1 != "n"){
        cout << "Negaliojantis pasirinkimas, bandykite dar karta: ";
        cin >> com1;
    }
    if (com1=="N" || com1=="n"){
        for (int i=0;i<n;i++) {masyvas[i]=ivedimas(m);}
    }
    else {for (int i=0;i<n;i++) {masyvas[i]=generavimas(m);}
    }
    cout<<"Galutini bala skaiciuoti pagal vidurki ar mediana? (V/M): "; cin >> com2;
    while (com2!="V" && com2!="v" && com2!="M" && com2!="m"){
        cout << "Negaliojantis pasirinkimas, bandykite dar karta: ";
        cin >> com2;
    }
    if (com2=="V" || com2=="v"){
        cout<<left<<setw(15)<< "Vardas" <<left<<setw(15)<< "Pavarde" <<left<<setw(20)<<
            "Galutinis(vid.)" << endl;
        for (int i=0;i<n; i++) {
            isvedimasVid(masyvas[i], m);
        }
    }
    else{
        cout<<left<<setw(15)<< "Vardas" <<left<<setw(15)<< "Pavarde" <<left<<setw(20)<<
            "Galutinis(med.)" << endl;
        for (int i=0;i<n; i++) {
            isvedimasMed(masyvas[i], m);
        }
    }
}

duom ivedimas(int &n) {
    vector<int> paz;
    int p;
    int sum = 0;
    duom asmuo;
    cout << "Iveskite varda: ";
    cin >> asmuo.vardas;
    cout << "Iveskite pavarde: ";
    cin >> asmuo.pavarde;
    cout << "Iveskite egzamino pazymi: ";
    cin >> asmuo.egz;
    string command = "N";
    while (command != "T" && command != "t"){
        cout << "Iveskite  pazymi: ";
        cin >> p;
        paz.push_back(p);
        cout << "Baigti pazymiu ivedima?(T/N): ";
        cin >> command;
        cout << endl;
    }
    sum = std::accumulate(paz.begin(), paz.end(), 0);
    sort(paz.begin(), paz.end());
    if ((paz.size()-1) % 2 == 0) {asmuo.med = double(paz[(paz.size()-1)/2] + paz[(paz.size()-1)/2+1])/2;}
    else asmuo.med = paz[(paz.size()-1)/2];
    asmuo.vid = (double)sum / (double)(paz.size());
    return asmuo;
    paz.clear();
}

duom generavimas(int &n) {
    vector<int> paz;
    int sum;
    duom asmuo;
    cout << "Iveskite varda: ";
    cin >> asmuo.vardas;
    cout << "Iveskite pavarde: ";
    cin >> asmuo.pavarde;
    cout << "Iveskite egzamino pazymi: ";
    cin >> asmuo.egz;
    string command = "N";
    while (command != "T" && command != "t"){
        paz.push_back(rand() % 10 + 1);
        cout << "Sugeneruotas pazymys: " << paz.back() << endl;
        cout << "Baigti pazymiu generavima?(T/N): ";
        cin >> command;
        cout << endl;
    }
    sum = accumulate(paz.begin(), paz.end(), 0);
    sort(paz.begin(), paz.end());
    if ((paz.size()-1) % 2 == 0) {asmuo.med = double(paz[(paz.size()-1)/2] + paz[(paz.size()-1)/2+1])/2;}
    else asmuo.med = paz[(paz.size()-1)/2];
    cout << "med: " << asmuo.med << endl;
    asmuo.vid = (double)sum / (double)(paz.size());
    return asmuo;
    paz.clear();
}
void isvedimasVid(duom temp, int n) {
    cout << left << setw(15) << temp.vardas
         << left << setw(15) << temp.pavarde
         << left << setw(20) << setprecision(3) << (temp.vid*0.4 + temp.egz*0.6) << endl;
}

void isvedimasMed(duom temp, int n) {
    cout << left << setw(15) << temp.vardas
         << left << setw(15) << temp.pavarde
         << left << setw(20) << setprecision(3) << (temp.med * 0.4 + temp.egz * 0.6) << endl;}
