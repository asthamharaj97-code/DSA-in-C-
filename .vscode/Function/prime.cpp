#include <iostream>
using namespace std;
int prime(int num)
{

    if (num <= 1)

        return false;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)

            return false;

        
    }
    return true;
}
int main()

{
    int num;
    cin >> num;
    if (prime(num))
    {

        cout << "prime number";
    }
    else{

    
    cout << "not prime";}

    return 0;
}
