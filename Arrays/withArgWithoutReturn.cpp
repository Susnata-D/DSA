#include <bits/stdc++.h>
using namespace std;

void fact(int a[]){

  if(n == 0)cout<<'0'<<endl;
  else if(n == 1)cout<<'1'<<endl;
  else if(n == 2)cout<<'2'<<endl;

  else{
    int factorial = 1;
    for(int i=1 ; i<=n ; i++){
      factorial = factorial * i;
    }
    cout<<factorial<<endl;
  }
}


int main(){

  int n;
  cin>>n;
  fact(n);
  return 0;

}
