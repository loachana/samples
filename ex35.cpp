#include <iostream>
using namespace std;

int main()
{
    int num = 20;

    cout << "first if loop begins" << endl;

    if (num < 30)
    {
        break;
    }

    cout << "second loop begins" << endl;

    if (num < 30)
    {
        continue;
    }

    return 0;
}
