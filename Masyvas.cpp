#include "mano_lib.hpp"

struct duom{
  string vardas;
  string pavarde;
  double vid;
  double med;
  int egz;
};

duom ivedimas(int &n);
void isvedimas(duom temp, int n);

int main(){
  duom asmuo1, masyvas[25];
  int n, m;
  cout<<"Iveskite studentu kieki: "; cin>>n;
  for (int i=0;i<n;i++) {masyvas[i]=ivedimas(m);}
  cout<<left<<setw(15)<< "Vardas" <<left<<setw(15)<< "Pavarde" <<left<<setw(20)<<
  "Galutinis(vid.)" <<left<<setw(20)<< "Galutinis(med.)" << endl;
  for (int i=0;i<n; i++) {
      isvedimas(masyvas[i], m);
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
    while (command != "T"){
            cout << "Iveskite  pazymi: ";
            cin >> dinMasyvas[s - 1];
            s += 1;
            cout << "Baigti pazymiu ivedima?(T/N): ";
            cin >> command;
            cout << endl;
        }
    for (int z = 0; z < (s - 1); z++) {paz += dinMasyvas[z];}
    sort(dinMasyvas, dinMasyvas + s);
    if ((s-1) % 2 == 0) {asmuo.med = double(dinMasyvas[(s-1)/2] + dinMasyvas[((s-1)/2)+1])/2;}
    else asmuo.med = dinMasyvas[(s-1)/2];
    asmuo.vid = (double)paz / (double)(s - 1);
    return asmuo;
    delete[] dinMasyvas;
}

void isvedimas(duom temp, int n){
    cout<<left<<setw(15)<< temp.vardas <<left<<setw(15)<< temp.pavarde <<left<<setw(20)<<
        (temp.vid*0.4 + temp.egz*0.6) <<left<<setw(20)<< (temp.med*0.4 + temp.egz*0.6) << endl;
}
