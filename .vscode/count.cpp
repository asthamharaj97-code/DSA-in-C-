#include <iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"number= ";
    cin>>num;
    while(num>0){
       num= num/10;
       count++;

    }
    cout<<"digit= "<<count;
    return 0;
}