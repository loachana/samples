#include <iostream>
using namespace std;

int main()
{
    int a = 3, b =5;
    int * foo, * boo;
    foo = &a;
    boo = &b;
    cout << foo  << endl;
    cout << ++foo << endl;

    return 0;
}
