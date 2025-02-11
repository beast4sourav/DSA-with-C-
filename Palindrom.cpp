#include<iostream>
using namespace std;

int main(){
    int n;
    int revNum = 0;
    cin>>n;
    int dub = n;
    while(n>0){
        int lastD = n%10;
        revNum = (revNum*10)+lastD;
        n=n/10;
    }
    if(revNum == dub){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
