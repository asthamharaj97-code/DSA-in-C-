#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "number= ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "its prime";
    }
    else
    {
        cout << "its not prime";
    }
    return 0;
}