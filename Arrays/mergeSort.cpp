#include <bits/stdc++.h>
using namespace std;

void merge(int arr[] , int start , int mid , int end){
    
    int len1 = mid-start+1;
    int len2 = end - mid;
    int *leftpart = new int[len1];
    int *rightpart = new int[len2];
    
    int k = start;
    for(int i=0 ; i<len1 ; i++){
        leftpart[i] = arr[k++];
    }
    k = mid+1;
    for(int i=0 ; i<len2 ; i++){
        rightpart[i] = arr[k++];
    }
    int i = 0;
    int j = 0;
    int mainArrayIndex = start;
    
    while(i < len1 and j < len2){
        if(leftpart[i] <= rightpart[j]) arr[mainArrayIndex++] = leftpart[i++];
        else arr[mainArrayIndex++] = rightpart[j++];
    }
    while(i < len1){
        arr[mainArrayIndex++] = leftpart[i++];
    }
    while(j < len2){
        arr[mainArrayIndex++] = rightpart[j++];
    }
    return;
}

void mergeSort(int arr[], int start , int end){
    
    if(start >= end)return;
    int mid = (start+end)/2;
    //SORT left part of the Array
    mergeSort(arr , start , mid);
    //SORT right part of the Array
    mergeSort(arr , mid+1 , end);
    
    //merge left and right part of the array after sorting
    merge(arr , start , mid , end);
}

void printArray(int ans[]){
    for(int i=0 ; i<5 ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
   int arr[] = {12 , 3 , 41, 5, 11};
   mergeSort(arr , 0 , 4);
   printArray(arr);
   return 0;
}
