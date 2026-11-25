#include <iostream>
using namespace std;
int main()
{
    int arr[4], sum = 0;
    cout << "enter your array number";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    for (int i = 0; i < 4; i++)
    {
        sum = sum + arr[i];
        
    }
    cout << sum;
    return 0;
}