#include <iostream>


#include <th-7kfos.h>

using namespace std;

int main() {
    double du = 1.499999999999999;
    cout.precision(20);
    cout << "Vous devez " << du << "euros" << endl;
    cout << "Arrondissons à leuro le plus proche i.e. à " << arrondi_euro_voisin(du) << "euros" << endl;
}
