#include <iostream>
using namespace std;

int main()
{
    char again = 'y';

    while (again == 'y')
    {
        cout << "\n**played an exciting**";
        cout << "\nDo you want to play again?: ";
        cin >> again;
    }

    cout << "\nokay, bye";

    return 0;
}
