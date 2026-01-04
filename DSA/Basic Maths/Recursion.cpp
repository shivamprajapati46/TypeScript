#include<iostream>
using namespace std;

// void name(int i, int n){
//     if(i>n) return;
//     cout<<"shiv"<<" ";
//     name(i+1, n);
// }

// void count(int i,int n){
//     if(i<1)return;
//     cout<<i<<" ";
//     count(i-,n);
// }

int sum(int n){
   if(n==0) return 0;
   return n + sum(n-1);
}

int factorial(int n){
   if(n==1) return 1;
   return n * factorial(n-1);
}

 int main(){
    int n;
    // name(1,5);
    // count(5,5);
   int ans = sum(5);
   cout<< ans <<endl;

   int fact = factorial(5);
   cout<< fact << " ";
    return 0;
 }