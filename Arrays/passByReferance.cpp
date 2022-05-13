#include <bits/stdc++.h>
using namespace std;

// void modifyArr(int arr[]){  //array name is itself a pointer to itself when we pass it in a fucntion it is already a reference to the arrays index.so we dont need to give * pointer to it
//   for(int i=0 ; i<5 ; i++){
//     if(arr[i]%2 == 0)arr[i] *= 2;
//     else arr[i] /= 2;
//   }
//   return;
// }
//
// int main(){
//   int arr[5] = {1,2,3,4,5};
//   cout<<"array before modifying"<<endl;
//   for(int i=0 ; i<5 ; i++)cout<<arr[i]<<" ";
//   cout<<endl;
//   modifyArr(arr);
//   cout<<"array after modifying is:"<<endl;
//   for(int i=0 ; i<5 ; i++)cout<<arr[i]<<" ";
// }
void modifyArr(vector<int> &arr){  //vector name is not a pointer to itself so we have to give & reference to it to change it actually
  for(int i=0 ; i<5 ; i++){
    if(arr[i]%2 == 0)arr[i] *= 2;
    else arr[i] /= 2;
  }
  return;
}

int main(){
  vector<int> arr = {1,2,3,4,5};
  cout<<"array before modifying"<<endl;
  for(int i=0 ; i<5 ; i++)cout<<arr[i]<<" ";
  cout<<endl;
  modifyArr(arr);
  cout<<"array after modifying is:"<<endl;
  for(int i=0 ; i<5 ; i++)cout<<arr[i]<<" ";
}
