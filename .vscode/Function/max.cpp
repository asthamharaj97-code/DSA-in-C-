#include <iostream>
using namespace std;
int findmax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int x, y;
    
    cout << findmax(40, 90);
    return 0;
}
