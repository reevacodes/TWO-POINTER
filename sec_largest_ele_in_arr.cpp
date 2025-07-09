// // SECOND LARGEST ELEMENT IN THE ARRAY
// // BRUTE FORCE

// #include<iostream>
// using namespace std;

// int secondLargest(int arr[],int n){
//     int largest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     }

//     int sec_largest = -1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>sec_largest && arr[i]!=largest){
//             sec_largest = arr[i];
//         }
//     }
//     return sec_largest;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Second Largest number: "<<secondLargest(arr,n);
//     return 0;
// }

// TC- O(n+n) -> O(2n)


// BETTER SOLN

#include<iostream>
using namespace std;

int secondLargest(int arr[],int n){
    int largest=arr[0];
    int slargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second Largest number: "<<secondLargest(arr,n);
    return 0;
}

// TC - O(n)