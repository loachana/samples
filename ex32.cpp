#include <iostream>
using namespace std;

int main()
{
    int num = 30;

    if (num < 10)
    {
        cout << "too low\n";
    }
    else if (num < 20 and num > 10)
    {
        cout << "fair value\n";
    }
    else
    {
        cout << "good value";
    }

    return 0;
}
    
