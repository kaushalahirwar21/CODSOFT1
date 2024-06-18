#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>


int main() {
    srand(time(0)); 
    int rn = rand() % 100 + 1; 
    int playerguess = 0;
    
    cout << "\n---WELCOME TO NUMBER GUESSING GAME---";
    cout << "\n\nGUESS THE NUMBER BETWEEN 1 TO 100 :"; 

    while (true) 
   	{
        cin >> playerguess;

        if (playerguess< rn) 
		{
            cout << "\nTOO LOW NUMBER TRY AGAIN : ";
        } 
		else if (playerguess > rn)
		 {
            cout << "\nTOO HIGH NUMBER TRY AGAIN : ";
         } 
		else {
            cout << "\nCONGRATULATIONS !!!! YOU SUCCESSFULLY GUSSED THE CORRECT NUMBER ";
            rn = rand() % 100 + 1; 
            cout << "\n\nGuess the new number (between 1 and 100): ";
            }
    }

    return 0;
}

