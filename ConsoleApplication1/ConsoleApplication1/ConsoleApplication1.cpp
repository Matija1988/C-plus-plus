// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    /*cout << "Unesi duljinu prve stranice trokuta: ";
    double str1; 
    cin >> str1;

    cout << "Unesi duljinu druge stranice trokuta: ";
    double str2; 
    cin >> str2; 

    double str3;

    if (str1 > str2) {

        str3 = sqrt(str1 * str1 - str2 * str2); 
         
    }
    else {

        str3 = sqrt(str1 * str1 + str2 * str2);
    }

    cout << "Stranica 3: " << str3 << endl; */

    cout << "Upisi neki tekst: ";
    string tekst;
    getline(cin, tekst);


    size_t pozicija = tekst.find_first_not_of(' ');


    while (pozicija != string::npos) {

        char slovo = tekst[pozicija];
        char velikoSlovo = toupper(slovo);
        tekst[pozicija] = velikoSlovo; 

        pozicija = tekst.find_first_of(".!?", pozicija + 1);

        if (pozicija != string::npos) {
            pozicija = tekst.find_first_not_of(' ', pozicija + 1); 
        }
    }

    cout << tekst << endl;


    return 0;

    /*if(pozicija != string::npos) {
    char znak = tekst[pozicija];
    char velikoSlovo = toupper(znak);
    tekst[pozicija] = velikoSlovo; 
    }
    cout << tekst << endl; */

  /*  for (char znak : tekst) {

        char velikoslovo = toupper(znak);

        cout << velikoslovo;
    }

    cout << endl;*/
 


    //double hipotenuza = sqrt(str1 * str1 + str2 * str2);
    //cout << "Hipotenuza: " << hipotenuza << endl; 

    //cout << "Kakluliramo sinus! Unesi broj: ";
    //double a;
    //cin >> a;

    //double sinus = sin(a); 
    //cout << "Sinus unesenog broja: " << sinus << endl;

    //cout << "Kakluliramo cosinus! Unesi broj: ";
    //double b; 
    //cin >> b;

    //double cosinus = cos(b); 
    //cout << "Cosinus unesenog broja: " << cosinus << endl; 

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
