#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    int answer = 6;
    int guess;

    while(answer != guess)
    {
        cout << "Enter a number: ";
        cin >> guess;

        if (answer > guess)
        {
            cout << "Your guess was too low!\n";
        }

        if (answer < guess)
        {
            cout << "Your guess was too high!\n";
        }
        if (answer == guess)
        {
            cout << "You guessed it!\n";
        }
    }
}