#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cin>>n;
    while(n>0){
        int lastD = n%10 ;
        sum = sum + (lastD*lastD*lastD) ;
        n=n/10;
    }
    cout<<sum;
}