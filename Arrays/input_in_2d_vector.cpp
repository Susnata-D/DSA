#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> arr;
    int val;
    for(int i=0 ; i< 3 ; i++){
      vector<int> temp;
        for(int j=0 ; j<2 ; j++){
          cin>>val;
          temp.push_back(val);
        }
        arr.push_back(temp);
        temp.clear();
    }
    for(int i=0 ; i< 3 ; i++){
        for(int j=0 ; j<2 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    sort(arr.begin() , arr.end()); // always sort on the basis of first index of each vector<int> in the vector<vector<int>>
    cout<<"Array after sorting is:"<<endl;

    for(int i=0 ; i< 3 ; i++){
        for(int j=0 ; j<2 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
