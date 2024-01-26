// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Upisi broj:";
    int a;
    cin >> a; 

    bool parNepar; 

    if (a % 2 == 0) {
        cout << "Broj " << a << " broj je paran" << endl;
        parNepar = true;
    }
    else {
        cout << "Broj " << a << " je neparan" << endl;
        parNepar = false; 
    }

    switch (parNepar) {
    
    case 0:
        cout << "Uneseni broj je neparan. Switch case!" << endl;
        break;
    case 1: 
        cout << "Uneseni broj je paran. Switch case!" << endl;
        break;
    default:
        break; 
    
    }

    cout << "Unesi drugi broj:";
    int b;
    cin >> b; 

    int min = a;
    int max = b; 

    min = (a < b) ? a : b;
    cout << min << endl;
    max = (a > b) ? a : b;
    cout << max << endl; 
 
    for (int i = min; i <= max; i++) {
        cout << i << " "; 
    }

    cout << endl; 
    cout << "Neparni brojevi: " << endl; 

    for (int i = min; i <= max; i++) {

        if (i % 2 != 0) {

            cout << i << " ";
            
        }
        
    }
   
    cout << endl;
    cout << "Parni brojevi: " << endl;
  
    for (int i = min; i <= max; i++) {

        if (i % 2 != 0) {

            continue; 

        }
        cout << i << " ";
    }

    cout << endl;
    cout << "Tablica mnozenja od " << a << " do " << b << endl;

    for (int i = min; i <= max; i++) {

        for (int j = min; j <= max; j++) {

            cout << setw (5) << i * j;
             
        }
        cout << endl;

    }

    cout << endl;
    cout << "Tablica mnozenja u donjem lijevom kutu" << endl;

  

    for (int i = 1; i <= 10; i++) {
        
       
        for (int j = 1; j <= i; j++) {

            cout << setw(5) << i * j;
            
        }
        cout << endl;
        
    }


    cout << endl;
    cout << "Tablica mnozenja u gornjem desnom kutu" << endl;

    for (int i = 1; i <= 10; i++) {
       
        int a = 1;
        int b = 1;


        for (int l = 1; l <= i; l++) {

            cout << setw(5) << " ";

            b++;
        }
      
        for (int j = 10; j > i; j--) {

          

            cout << setw(5) << a * b;

            a++;
         

           
        }

       

        cout << endl;

    }



    return 0;
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

    /*cout << "Upisi neki tekst: ";
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


    return 0;*/

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
