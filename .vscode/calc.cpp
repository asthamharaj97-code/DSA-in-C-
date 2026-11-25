#include <iostream>
using namespace std;
int main()
{
    char opp;
    double a, b;
    cout << "enter operator";
    cin >> opp;
    cout << "enter your numbers";
    cin >> a >> b;
    switch (opp)
    {
    case '+':
        cout << "result" << a + b;
        break;
    case '-':
        cout << "result" << a - b;
        break;
    case '/':
        cout << "result" << a / b;
        break;
    case '*':
        cout << "result" << a * b;
        break;

    default:
        cout << "error";
    }
    return 0;
}