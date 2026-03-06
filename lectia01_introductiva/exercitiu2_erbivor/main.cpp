#include <iostream>
#include <string>
using namespace std;

// TODO: Definește clasa Erbivor aici, deasupra lui main()
//
// Ar trebui să aibă:
// - atribut privat: string nume
// - atribut privat: double energie
// - constructor: Erbivor(string n, double e)
// - metodă: void mananca(double cat)
// - metodă: void afiseazaStare()
//
// Exemplu de structură:
// class Erbivor {
// private:
//     string nume;
//     double energie;
// public:
//     Erbivor(string n, double e) { ... }
//     void mananca(double cat) { energie = energie + cat / 10; }
//     void afiseazaStare() { ... }
// };

class Erbivor {
private:
    string nume;
    double energie;
public:
    Erbivor(string n, double e) {
        nume = n;
        energie = e;
    }

    void mananca(double cat) {
        energie = energie + cat / 10;
    }

    void afiseazaStare() {
        cout << "Erbivor-ul " << nume << " are energie " << energie << endl;
    }
};

int main() {
    // TODO: Creează un erbivor "Bambi" cu energie 50
    // Exemplu: Erbivor animal("Bambi", 50.0);
    Erbivor animal("Bambi", 50.0)

    // TODO: Afișează starea (ar trebui: "Erbivor-ul Bambi are energie 50")
    // Exemplu: animal.afiseazaStare();
    animal.afiseazaStare();

    // TODO: Mănâncă 100 (energia crește cu 10, deci devine 60)
    // Exemplu: animal.mananca(100.0);
    animal.mananca(100.0)
    // TODO: Afișează starea din nou (ar trebui: "Erbivor-ul Bambi are energie 60")
    // Exemplu: animal.afiseazaStare();
        animal.afiseazaStare();

    return 0;
}
