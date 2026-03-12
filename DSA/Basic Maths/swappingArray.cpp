#include<iostream>
using namespace std;

void arrayReverse(int arr[], int l, int r){
    if(l >= r) return;
    swap(arr[l], arr[r]);
    arrayReverse(arr, l+1, r-1);
}

int main(){

    // int arr[] = {1,2,3,4,5};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
      cin >> arr[i];
    }
    arrayReverse(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}