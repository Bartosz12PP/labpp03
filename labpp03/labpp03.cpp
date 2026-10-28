#include <iostream>

using namespace std;
int main()
{
    int a;
    int b;
    cout << "podaj a i b: ";
    cin >> a;
    cin >> b;
    if (a == b) {
        cout << "a rowne b" << endl;
    }
    else if (a < b) {
        cout << "a mniejsze od b"<<endl;
    }
    else {
        cout << "a wieksze od b" << endl;
    }
    //zad3
    double r;
    cout << "podaj r: ";
    cin >> r;
    if (0.7 <= r && r <=1 ) {
        cout << "bardzo silna korelacja dodatnia" << endl;
    }
    else if (r >= 0.5) {
        cout << "umiarkowana korelacja dodatnia" << endl;
    }
    else if (r >= 0.2) {
        cout << "slaba korelacja dodatnia" << endl;
    }
    else if (r >= 0) {
        cout << "brak korelacj" << endl;
    }
    else {
        cout << "nie taki numer" << endl;
    }
    //zad4
    int liczba1;
    int liczba2;
    char znak;
    cout << "podaj dwie liczby: " << endl;
    cin >> liczba1;
    cin >> liczba2;
    cout << "jaka operacja? ";
    cin >> znak;
    switch (znak) {
        case'+':
            cout << liczba1 + liczba2;
        case'-':
            cout << liczba1 - liczba2;
        case'*':
            cout << liczba1 * liczba2;
        case'/':
            cout << liczba1 / liczba2;
    }
    //zad6
    bool czyrobicdalej = true;
    char opd;
    while (czyrobicdalej == true) {
        cout << "podaj dwie liczby: " << endl;
        cin >> liczba1,
            cin >> liczba2;
        cout << "jaka operacja? ";
        cin >> znak;
        switch (znak) {
        case'+':
            cout << liczba1 + liczba2;
            cout << "czy kontynuwac liczenie?" << endl;
            cin >> opd;
            if (opd == 't') {
                czyrobicdalej = false;
            }
        case'-':
            cout << liczba1 - liczba2;
            cout << "czy kontynuwac liczenie?" << endl;
            cin >> opd;
            if (opd == 't') {
                czyrobicdalej = false;
            }
        case'*':
            cout << liczba1 * liczba2;
            cout << "czy kontynuwac liczenie?" << endl;
            cin >> opd;
            if (opd == 't') {
                czyrobicdalej = false;
            }
        case'/':
            cout << liczba1 / liczba2;
            cout << "czy kontynuwac liczenie?" << endl;
            cin >> opd;
            if (opd == 't') {
                czyrobicdalej = false;
            }
        }
    }
    //zad7
    int i = 0;
    while (true) {
        if (i == 200) { break; }
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }
    //zad8







    return 0;
}

