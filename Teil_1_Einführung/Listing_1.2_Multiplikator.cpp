#include <iostream>
using namespace std;

int main()
{
    int summand1 {0}, summand2 {0}, summand3 {0};
    // Lies drei Zahlen ein
    cout << " Drei ganze Zahlen eingeben: ";
    cin >> summand1 >> summand2 >> summand3;
    /*berechne das Produkt beider 
    Zahlen  */
    int summe = summand1 * summand2 * summand3;
    // Zeige das Ergebnis auf dem Bildschirm an
    cout << "Nr.1 = " << summand1 << '\n' << "Nr.2 = " << summand2 << '\n' << "Nr.3 = " << summand3 << '\n' << "Produkt = " << summe << '\n';
    return 0;
}