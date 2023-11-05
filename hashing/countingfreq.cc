#include<bits/stdc++.h>
using namespace std;

vector<int> countFrequency ( int n, int x, vector<int>& nums){
vector<int> arr(x,0);
for( int i=0; i<n;i++){
    arr[nums[i]]++;
}

for( int i=0;i<x;i++){
    if(arr[i]!=0){
        cout<<arr[i];
    }
}
}
int main (){
    int n;
    cin>>n;
    int arr[n];
    for( int i=0; i<n;i++) cin>>arr[i];
 map<int ,int>mpp;
 for( int  i=0;i<n;i++){
    mpp[arr[i]]++;
 }
 for( auto i : mpp){
    cout<< i.second;
 }

}