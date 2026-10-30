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
	int n;
    cout << "Zad 8. Podaj naturalna dodatnia liczbe n: ";
    cin >> n;
    for (int j = 2; j <= sqrt(n); j++) {
        if (n % j == 0) {
            cout << "Znaleziono pierwszy dzielnik: " << j << endl;
            break;
        }
    }

    //zad9
    double temp;
    cout << "Podaj temperature powietrza: ";
    cin >> temp;
    if (temp < 0) {
        cout << "Mroz" << endl;
    } else if (temp < 10) {
        cout << "Zimno" << endl;
    } else if (temp < 20) {
        cout << "Umiarkowanie" << endl;
    } else if (temp < 30) {
        cout << "Cieplo" << endl;
    } else {
        cout << "Goraco" << endl;
    }

    //zad10
    int c, d, e;
    cout << "Zad 10. Podaj trzy liczby calkowite: ";
    cin >> c >> d >> e;
    int max_val = c;
    if (d > max_val) max_val = d;
    if (e > max_val) max_val = e;
    cout << "Najwieksza liczba to: " << max_val << endl;

    //zad11
    int rok;
    cout << "Zad 11. Podaj rok: ";
    cin >> rok;
    if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
        cout << "Rok przestepny" << endl;
    } else {
        cout << "Rok nie jest przestepny" << endl;
    }

    //zad12
    int opcja;
    cout << "Menu:\n1 - Start\n2 - Ustawienia\n3 - Pomoc\n4 - Koniec\nWybierz opcje: ";
    cin >> opcja;
    switch (opcja) {
        case 1: cout << "Start" << endl; break;
        case 2: cout << "Ustawienia" << endl; break;
        case 3: cout << "Pomoc" << endl; break;
        case 4: cout << "Koniec" << endl; break;
        default: cout << "Nieprawidlowy wybor" << endl; break;
    }

    //zad13
    int ocena;
    cout << "Podaj ocene (1-5): ";
    cin >> ocena;
    switch (ocena) {
        case 1: cout << "niedostateczny" << endl; break;
        case 2: cout << "dopuszczajacy" << endl; break;
        case 3: cout << "dostateczny" << endl; break;
        case 4: cout << "dobry" << endl; break;
        case 5: cout << "bardzo dobry" << endl; break;
        default: cout << "Nieprawidlowa ocena" << endl; break;
    }

    //zad14
    int suma = 0;
    for (int k = 1; k <= 100; k++) {
        if (k % 3 == 0) {
            continue;
        }
        suma += k;
    }
    cout << "Suma liczb niepodzielnych przez 3 od 1 do 100: " << suma << endl;

    //zad15
    for (int k = 1; ; k++) {
        if (k > 50 && k % 7 == 0) {
            cout << "Pierwsza liczba > 50 podzielna przez 7 to: " << k << endl;
            break; 
        }
    }

    //zad16
    cout << "Tabliczka mnozenia:" << endl;
    for (int k = 1; k <= 10; k++) {
        for (int l = 1; l <= 10; l++) {
            cout << k * l << "\t";
        }
        cout << endl;
    }

    //zad17
    int wczytana_liczba;
    cout << "Podaj nieujemna liczbe calkowita: ";
    cin >> wczytana_liczba;
    int ilosc_cyfr = 0;
    if (wczytana_liczba == 0) {
        ilosc_cyfr = 1;
    } else {
        while (wczytana_liczba > 0) {
            wczytana_liczba /= 10;
            ilosc_cyfr++;
        }
    }
    cout << "Liczba cyfr: " << ilosc_cyfr << endl;

    //zad18
    int p;
    cout << "Podaj n do sprawdzenia czy jest pierwsza: ";
    cin >> p;
    bool czy_pierwsza = true;
    if (p <= 1) {
        czy_pierwsza = false;
    } else {
        for (int k = 2; k <= sqrt(p); k++) {
            if (p % k == 0) {
                czy_pierwsza = false;
                break;
            }
        }
    }
    if (czy_pierwsza) cout << "Liczba pierwsza" << endl;
    else cout << "Liczba nie jest pierwsza" << endl;

    //zad19
    int opcja_menu;
    do {
        cout << "Menu:\n1 - Start\n2 - Ustawienia\n3 - Pomoc\n4 - Koniec\nWybierz opcje: ";
        cin >> opcja_menu;
        switch (opcja_menu) {
            case 1: cout << "Start" << endl; break;
            case 2: cout << "Ustawienia" << endl; break;
            case 3: cout << "Pomoc" << endl; break;
            case 4: cout << "Zamykanie programu" << endl; break;
            default: cout << "Nieprawidlowy wybor" << endl; break;
        }
    } while (opcja_menu != 4); 

    //zad20
    double s = 0.0;
    int iteracje = 0;
    while (s < 10.0) {
        s += 0.1;
        iteracje++;
        cout << "Aktualna suma: " << s << endl;
    }
    cout << "Zad 20. Koncowa suma: " << s << ", liczba iteracji: " << iteracje << endl;






    return 0;
}