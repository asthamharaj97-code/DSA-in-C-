#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "marks btao";
    cin >> marks;
    if (marks >= 0 && marks <= 100)
    {
        if (marks >= 90)
        {
            cout << "GRADE A";
        }
        else
        {
            if (marks >= 60)
            {
                cout << "GRADE B";
            }
            else
            {
                cout << "GRADE C";
            }
        }
    }
    else
    {
        cout << "invalid marks";
    }
    return 0;
}