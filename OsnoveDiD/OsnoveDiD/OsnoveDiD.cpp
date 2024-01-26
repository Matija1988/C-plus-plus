// OsnoveDiD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <random>
#include <cstdlib>

using namespace std; 
using namespace std::chrono; 

int main()
{
    cout << "*********************************************" << endl;
    cout << "************** << Osnove D&D >> *************" << endl;
    cout << "*********************************************" << endl; 

    cout << "Probudio si se iz sna i osjecas da je jedno od onih jutra kada ti je mozak par brojeve prevelik za tvoju lubanju. " << endl;
    cout << "Zeludac ti se okrece. Ustajes se tesko i primjecujes da ne nosis svoju odjecu nego sarenu haljinu sa cvjetnim uzorcima. " << endl;
    cout << "Nemas vremena previse razmisljati gdje se nalazis jer je upravo iza divovske gljive iskosio zec sa oklagijom i juri prema tebi. " << endl;
    cout << "U ruci drzis peglu hoces li: " << endl;
    cout << "1: Napasti " << endl;
    cout << "2: Bjezati " << endl;
    cout << "3: Nastavit spavat " << endl;


    while(true) {

    int korisnikUnos;
    cin >> korisnikUnos;
       

    switch (korisnikUnos) {
       
    case 1: 
        cout << "Pocinje borba" << endl;
        
        break;
    case 2:
        cout << "NIJE IMPEMENTIRANO" << endl; 
        break; 
    case 3:
        cout << "NIJE IMPEMENTIRANO" << endl;
        break;
    
    default:
        cout << "Krivi odabir .... debilu" << endl; 
        break; 
    }

    
    int lowest = 1;
    int d20 = 20;

    random_device rd;
    mt19937 eng(rd());

    uniform_int_distribution<> rand(1, 20); 

    int randomNumber = rand(eng); 
   
    cout << "d20 kocka pala je na " << randomNumber << endl;

    if(randomNumber > 10 && randomNumber < 20)
    {
        cout << "Pogodio si zeca peglom i nanio si mu stetu" << endl;
            
          
    }
    else if (randomNumber < 10 && randomNumber > 1)
    {

        cout << "Promasaj. Krivis onu jednu rakiju koju si popio sa kumom." << endl;
    }
    else if (randomNumber == 1)
    {

        cout << "Kriticni promasaj. Zamahnio si peglom kao da si Atlas koji pokusava baciti Zemlju sa svojih leda. Zavrtio si se, pao na guzicu i zec i gljiva iza koje se skrivao se smiju" << endl; 
    }
    else
    {
        cout << "Legendarni pogodak. Zamahnio si aperkat peglom i pogodio zeca drito u bradu kako je nalijetao na tebe. Od siline udarca odletio je 2 metra u zrak dok ti je pojvetarac prolazio kroz kosu zauzeo si herojsku pozu. Ovo je Rock'n'roll picko." << endl; 
    }

    cout << "1: Ponovo" << endl;
    cout << "2: Izlaz" << endl; 
    int unos2; 
    cin >> unos2;

    switch (unos2) {

    case 1:
        cout << "Volis se peglat sa zekom :D " << endl; 
        break;
    case 2:
        exit(0);
    }

    }

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
