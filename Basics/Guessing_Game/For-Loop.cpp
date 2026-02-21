#include <iostream>
using namespace std;

int main()
{
    int guessnumber = 28;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;

    cout << "Guessing Game" << endl;
    for (; guess != guessnumber && guesscount < guesslimit;guesscount++ )
    {
        cout << "Enter any number(1-100): ";
        cin >> guess;

        if (guess < guessnumber) {
            cout << "Too Low. Try Again!" << endl;
        }
        else if (guess > guessnumber) {
            cout << "Too High. Try Again!" << endl;
        }
    }

    if (guess == guessnumber) {
        cout << "Correct guess...! " << endl;
    }
    else {
        cout << "Out of guesses." << endl;
    }
    cout << "Thank You for visiting!" << endl;

    return 0;
}
