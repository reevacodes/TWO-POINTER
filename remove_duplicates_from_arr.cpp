#include<iostream>
#include<set>
#include <algorithm>
using namespace std;

int removeDuplicates(int arr[], int n){
    sort(arr,arr+n);
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int newSize=removeDuplicates(arr,n);

    for(int i=0;i<newSize;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// TC- O(n)