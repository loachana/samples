#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int secretNum = rand()%100 + 1;
    int tries = 0;
    int guess;

    cout << "\nWellcome to guessing game\n";

    do
    {
        tries += 1;
        cout << "\nguess my number: ";
        cin >> guess;

        if (guess < secretNum)
        {
            cout << "\ntoo low";
        }
        else if (guess > secretNum)
        {
            cout << "\ntoo high";
        }
        else
        {
            cout << "we have a winner \n";
        }
    } while (guess != secretNum);

    cout << "tries: " << tries << "\n";
    return 0;
}
