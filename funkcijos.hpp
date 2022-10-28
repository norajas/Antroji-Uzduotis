#include "mano_lib.hpp"

struct duom {
    string vardas;
    string pavarde;
    double vid;
    double med;
    int egz;
    double gal;
};

class Timer {
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start;
public:
    Timer() : start{std::chrono::high_resolution_clock::now()} {}

    void reset() {
        start = std::chrono::high_resolution_clock::now();
    }

    double elapsed() const {
        return std::chrono::duration<double>
                (std::chrono::high_resolution_clock::now() - start).count();
    }
};

duom ivedimas(int &n);

duom generavimas(int &n);

duom nuskaitymas();

void isvedimasVid(duom temp, int n);

void isvedimasMed(duom temp, int n);

void gen(int x);

list<duom> nusk(int x);

string pazGeneravimas();

void isv(list<duom> l, string x);
