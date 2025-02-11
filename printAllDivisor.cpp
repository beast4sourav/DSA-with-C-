// #include<bits/stdc++.h>
// int* printDivisors(int n, int &size){
//
//     vector<int> divisors;
//
//     for (int i = 1;i <= n;i++) {
//
//         if (n % i == 0) divisors.push_back(i);
//
//     }
//
//     size = divisors.size();
//
//     int* ans = new int[size];
//
//     for (int i = 0;i < size;i++) {
//
//         ans[i]=divisors[i];
//
//     }
//
//     return ans;
//
// }
// 2nd approach

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
//
// void printDivisor(int n){
//     for(int i=1; i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }
//
// int main(){
//     int n;
//     cin>>n;
//     printDivisor(n);
//     return 0;
// }