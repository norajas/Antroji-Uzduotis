#include "funkcijos.hpp"

int main() {
    gen(1000);
    vector<duom> a = nusk(1000);
    isv(a, "1");
    cout<<endl;
    gen(10000);
    vector<duom> b = nusk(10000);
    isv(b, "2");
    cout<<endl;
    gen(100000);
    vector<duom> c = nusk(100000);
    isv(c, "3");
    cout<<endl;
    gen(1000000);
    vector<duom> d = nusk(1000000);
    isv(d, "4");
    cout<<endl;
    gen(10000000);
    vector<duom> e = nusk(10000000);
    isv(e, "5");
};
