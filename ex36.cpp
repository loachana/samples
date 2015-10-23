#include <iostream>
#include <string>
using namespace std;

int main()
{
   string name;
   string password;

   cout << "user name: ";
   cin >> name;
   if (name == "lochana")
   {
       cout << "password: ";
       cin >> password;

       if (password == "1234")
       {
           cout << "logged in\n";
       }
       else
       {
           cout << "wrong password!\n";
       }

   }
   else
   {
       cout << "wring user name\n";
   }
   return 0;
}

