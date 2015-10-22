#include <iostream>
using namespace std;

int addition(int i, int j)
{
    int r;
    r = i + j;
    return r;
}

int main()
{
    int z;
    z = addition(5,3);
    cout << "The result is " << z << endl;
   return 0; 
}

