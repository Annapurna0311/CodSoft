#include <iostream>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>
using namespace std;
int main() {
    srand(time(0));
    int randNum = rand() % 100 + 1;

    int userInp;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!"<<endl;
    cout << "Try to guess the number between 1 and 100.\n\n";

    do {
        cout << "Input for the Guess : ";
        cin >> userInp;
        attempts++;
        if (userInp < randNum) {
            cout << "---Too low! Try again.---\n";
        } else if (userInp > randNum) {
            cout << "---Too high! Try again.---\n";
        } else {
            cout << "\nCONGRATS!! You guessed the number in " << attempts << " attempts.\n";
        }

    } while (userInp != randNum);

    return 0;
}

