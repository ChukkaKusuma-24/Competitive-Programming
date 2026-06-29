#include <cmath>
#include <cstdio>
#include<iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    int min_index=0,max_index=0;
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min_index=i;
            min=arr[i];
        }
        if(max<arr[i]){
            max_index=i;
            max=arr[i];
        }
    }
     
    swap(arr[min_index],arr[max_index]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

