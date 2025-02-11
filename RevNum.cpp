#include<iostream>
using namespace std;

int main(){
    int n;
    int revNum = 0;
    cin>>n;
    while(n>0){
        int lastd = n%10;
        revNum = (revNum*10)+lastd;
        n=n/10;
    }
    cout<<revNum;
    
}
