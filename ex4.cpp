#include <iostream>
using namespace std;

int main()
{
    int a;
    int b(2);
    int c{3};
    int result;

    a = a + b;
    result = c - b;
    cout << result;

    return 0;
}
