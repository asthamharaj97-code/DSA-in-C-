#include <iostream>
using namespace std;
int main(){
    int num,rem,rever=0;
    cout<<"number= ";
    cin>>num;
    while(num>0){
        rem=num%10;
        rever=rever*10+rem;
        num=num/10;
    }
    cout<<"reverse= "<<rever;
    return 0;
}