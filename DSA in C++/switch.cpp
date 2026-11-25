#include <iostream>
using namespace std;
int main()
{
    string day;
    cin >> day;
    switch (day[0])
    {
    case 'S':
    case 's':
        cout << "wear pink";
        break;

    case 'M':
    case 'm':
        cout << "wear RED";
    }
}
