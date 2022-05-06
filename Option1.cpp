#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string mystr;
    cout << "Enter the first name: ";
    getline (cin, mystr);
    cout << mystr << ".\n";
    cout << "Enter the last name: ";
    getline (cin, mystr);
    cout << mystr << ".\n";
    cout << "Enter the address: ";
    getline (cin, mystr);
    cout << mystr << ".\n";
    cout << "Enter the city: ";
    getline (cin, mystr);
    cout << mystr << ".\n";
    cout << "Enter the zipcode: ";
    getline (cin, mystr);
    cout << mystr << ".\n";
    return 0;

}