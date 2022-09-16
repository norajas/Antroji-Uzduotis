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
//  if (com1!="T" && com1!="t" && com1 != "N" && com1 != "n"){
//      cout << "Negaliojantis pasirinkimas, bandykite dar karta: ";
//      cin >> com1;
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
      cout<<std::left<<std::setw(15)<< "Vardas" <<std::left<<std::setw(15)<< "Pavarde" << std::left<<std::setw(20)<<
          "Galutinis(vid.)" << endl;
      for (int i=0;i<n; i++) {
          isvedimasVid(masyvas[i], m);
      }
  }
  else{
      cout<<std::left<<std::setw(15)<< "Vardas" <<std::left<<std::setw(15)<< "Pavarde" << std::left<<std::setw(20)<<
          "Galutinis(med.)" << endl;
      for (int i=0;i<n; i++) {
          isvedimasMed(masyvas[i], m);
      }
  }
}

duom ivedimas(int &n) {
    int *dinMasyvas;
    int s = 1;
    int paz;
    dinMasyvas = new int[s];
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
            cin >> dinMasyvas[s - 1];
            s += 1;
            cout << "Baigti pazymiu ivedima?(T/N): ";
            cin >> command;
            cout << endl;
        }
    for (int z = 0; z < (s-1); z++) {paz += dinMasyvas[z];}
    sort(dinMasyvas, dinMasyvas + s);
    if ((s-1) % 2 == 0) {asmuo.med = double(dinMasyvas[(s-1)/2] + dinMasyvas[(s-1)/2+1])/2;}
    else asmuo.med = dinMasyvas[(s-1)/2];
    asmuo.vid = (double)paz / (double)(s-1);
    return asmuo;
    delete[] dinMasyvas;
}

duom generavimas(int &n) {
    int *dinMasyvas;
    int s = 1;
    int paz;
    dinMasyvas = new int[s];
    duom asmuo;
    cout << "Iveskite varda: ";
    cin >> asmuo.vardas;
    cout << "Iveskite pavarde: ";
    cin >> asmuo.pavarde;
    cout << "Iveskite egzamino pazymi: ";
    cin >> asmuo.egz;
    string command = "N";
    while (command != "T" && command != "t"){
        dinMasyvas[s - 1] = rand() % 10 + 1;
        cout << "Sugeneruotas pazymys: " << dinMasyvas[s-1] << endl;
        s += 1;
        cout << "Baigti pazymiu generavima?(T/N): ";
        cin >> command;
        cout << endl;
    }
    for (int z = 0; z < (s-1); z++) {paz += dinMasyvas[z];}
    sort(dinMasyvas, dinMasyvas + s);
    if ((s-1) % 2 == 0) {asmuo.med = double(dinMasyvas[(s-1)/2] + dinMasyvas[(s-1)/2+1])/2;}
    else asmuo.med = dinMasyvas[(s-1)/2];
    asmuo.vid = (double)paz / (double)(s-1);
    return asmuo;
    delete[] dinMasyvas;
}
void isvedimasVid(duom temp, int n) {
    cout << std::left << std::setw(15) << temp.vardas
         << std::left << std::setw(15) << temp.pavarde
         << std::left << std::setw(20) << (temp.vid*0.4 + temp.egz*0.6) << endl;
}

void isvedimasMed(duom temp, int n) {
    cout << std::left << std::setw(15) << temp.vardas
         << std::left << std::setw(15) << temp.pavarde
         << std::left << std::setw(20) << (temp.med*0.4 + temp.egz*0.6) << endl;
}
