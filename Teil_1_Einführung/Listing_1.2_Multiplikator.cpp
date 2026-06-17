#include <iostream>
using namespace std;

int main()
{
    int summand1 {0};
    int summand2 {0};
    // Lies zwei Zahlen ein
    cout << " Zwei ganze Zahlen eingeben: ";
    cin >> summand1 >> summand2;
    /*berechne die Summe beider 
    Zahlen  */
    int summe = summand1 + summand2;
    // Zeige das Ergebnis auf dem Bildschirm an
    cout << "Summe=" << summe << '\n';
    return 0;
}