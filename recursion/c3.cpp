#include<bits/stdc++.h>
using namespace std;
void reversearray( int n, int arr[], int i){
 if( i>=n/2) return;
 swap(arr[n-1-i], arr[i]);
 reversearray(n,arr,i+1);
}
int main (){
    int arr[100], n;
    cin>>n;
    for( int i=0;i<n;i++) cin>>arr[i];
    reversearray(n,arr,0);
    for( int i=0;i<n;i++) cout<<arr[i]<<" ";
}