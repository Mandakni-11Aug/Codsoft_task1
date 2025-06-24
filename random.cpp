#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main () {
// Seed the random number generator
srand(static_cast<unsigned int>(time(0)));

//Generate random number between 1 and 100 
int numbertoGuess = rand() % 100 + 1;
int userGuess;

cout << "Welcome to the Number Guessing Game!" << endl;
cout << "I have selected a number between 1 and 100." << endl;

// Loop until the correct guesses the correct number
 do{
    cout << "Enter your guess number: ";
    cin >> userGuess;

    if (userGuess < numbertoGuess) {
        cout << "Too low! Try again now." << endl;
    }else if (userGuess > numbertoGuess) {
        cout << "Too high! Try again now." << endl;
    } else {
        cout << "Congratulations! You guessed the correct number well done!" << endl;
    }

 } while (userGuess != numbertoGuess);

 return 0;
}