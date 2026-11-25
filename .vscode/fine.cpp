#include <iostream>
using namespace std;
int main(){
    int speed;
    cin>>speed;
    if(speed<=50){
        cout<<"safe driving";
    }
    else{
        cout<<"fine issued due to over speeding";
    }
    return 0;
}