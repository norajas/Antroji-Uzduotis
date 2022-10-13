#include "mano_lib.hpp"
#include "funkcijos.hpp"

int main() {
     gen(1000);
    vector<duom> a = nusk(1000);
    isv(a);
    cout<<endl;
    gen(10000);
    vector<duom> b = nusk(10000);
    isv(b);
    cout<<endl;
    gen(100000);
    vector<duom> c = nusk(100000);
    isv(c);
    cout<<endl;
    gen(1000000);
    vector<duom> d = nusk(1000000);
    isv(d);
    cout<<endl;
    gen(10000000);
    vector<duom> e = nusk(10000000);
    isv(e);
};
