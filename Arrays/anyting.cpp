//write a program to input n values and print n natural numbers from 1 to n using recursive function and also from n to 1

#include <bits/stdc++.h>
using namespace std;

void func(int n){
  if(n == 1)return 1;
  else return func(n-1);
}

int main(){

  int n;
  cin>>n;
  for(int i=0 ; i<n ; i++){
    cout<<func(i);
  }
}
