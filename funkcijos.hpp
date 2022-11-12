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

duom nuskaitymas(string f);

void isvedimasVid(duom temp, int n);

void isvedimasMed(duom temp, int n);

void gen(int x);

bool palyginimas(const duom& a, const duom& b);

double nusk_list1(int x);

double nusk_vect1(int x);

double nusk_list2(int x);

double nusk_vect2(int x);

double vect_st_part(int x);

double vect_partition(int x);

string pazGeneravimas();

vector<duom> nusk(int x);

void isv(vector<duom> v, int x);
