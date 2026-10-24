#include <iostream>
using namespace std;
int main(){
    int total ,hour,min,sec;
    cout<<"total sec";
    cin>>total;
    hour=total/3600;
    min=(total%3600)/60;
    sec=total%60;
    cout<<"hour"<<hour<<endl;
    cout<<"min"<<min<<endl;
    cout<<"sec"<<sec<<endl;
    return 0;

}