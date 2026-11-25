#include <iostream>
using namespace std;
int add(int a,int b)
{

    return a+b;
}
int main()
{
    int a, b;
    cout << "give two numbers";
    cin>>a>>b;
    add(a,b);
    return 0;
}
