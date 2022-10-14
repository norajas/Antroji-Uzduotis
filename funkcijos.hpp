#include "mano_lib.hpp"

struct duom {
    string vardas;
    string pavarde;
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

void gen(int x);
vector<duom> nusk(int x);
string pazGeneravimas();
void isv(vector<duom> v, string x);
