#include <iostream>
using namespace std;

int sub(int a, int b)
{
    int c;
    c = a - b;
    return c;
}

int main()
{
    cout << "4 - 3 is " << sub(4, 3);
    cout << "6 - 3 is " << sub(6, 3);
    return 0;
}
