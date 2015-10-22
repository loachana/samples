#include <iostream>
#include <string>
using namespace std;

string glue(string& a, string& b)
{
    string d;
    d = a + b;
    return d;
}

int main()
{
    string c;
    c = glue("hello","world");
    return 0;
}
