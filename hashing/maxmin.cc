#include<bits/stdc++.h>
using namespace std;
void frequency( int arr[], int n){
    map<int,int> mpp;
    for( int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int minf=0, maxf=0, mine=1,maxe=0;
    for( auto i:mpp){
        int element= i.first;
        int count = i.second;
       if( count>maxe){
        maxe=element;
        maxf=count;
       }
       if( count<mine){
        mine=element;
        minf=count;
       }
            
        

    }

    cout<<"highest="<<maxe<<"lowest="<<mine;
}
int main (){
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++) cin>>arr[i];
    frequency( arr,n);

}