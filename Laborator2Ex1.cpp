//funtia main
#include "Fractia.h"
#include <iostream>
using namespace std;

int main()
{
    Fractia fr1; // 0/1
    Fractia fr2(4); // 4/1
    Fractia fr3(6, 7); // 6/7

    Fractia rez_adunare = fr1.adunare(fr2);
    Fractia rez_scadere = fr2.scadere(fr3);
    Fractia rez_inmultire = fr1.inmultire(fr3);
    Fractia rez_impartire = fr2.impartire(fr3);

    cout << "Adunarea este: ";
    rez_adunare.print();

    cout << "\nScaderea este: ";
    rez_scadere.print();

    cout << "\nInmultirea este: ";
    rez_inmultire.print();

    cout << "\nImpartirea este:\n ";
    rez_impartire.print();

    if (fr2.egal(fr3)) {
        cout << "Fractiile sunt egale.\n";
    }
    else {
        cout << "Fractiile nu sunt egale.\n";
    }
    return 0;
}
