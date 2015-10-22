#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    do {
        cout << "Enter text: ";
        getline (cin, str);
        cout << "you enter! " << str << "\n";
    } while (str != "google");
}
