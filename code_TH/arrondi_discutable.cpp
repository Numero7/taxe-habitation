#include <iostream>


#include <th-7kfos.h>

using namespace std;

int main() {
    double du = 1.499999999999999;
    cout.precision(30);
    cout << "Vous devez " << du << "euros" << endl;
    cout << "Arrondissons à leuro le plus proche i.e. à " << arrondi_euro_voisin(du) << "euros" << endl;

    du = 1.999999999999999;
    cout << "Vous devez " << du << "euros" << endl;
    cout << "Arrondissons à leuro inférieur i.e. à " << arrondi_euro_inf(du) << "euros" << endl;

}
