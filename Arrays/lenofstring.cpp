#include <bits/stdc++.h>
using namespace std;
//program to input a number and print its factorial by using functions with return type without argument

int fact(int n){
  if(n == 0)return 0;
  if(n == 1)return 1;
  if(n == 2)return 2;

  else return n*fact(n-1);
}

int main(){

  int n;
  cin>>n;
  cout<<fact(n)<<endl;
  return 0;

}
