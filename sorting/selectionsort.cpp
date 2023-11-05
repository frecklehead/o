#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
cout<<"enter your size";
cin >>n;
int arr[n];
for( int i=0;i<n;i++){
    cin>>arr[i];
}
for( int i=0; i<n-1;i++){
    int min= i;
   for( int j=i;j<=n-1;j++){
    if( arr[j]<arr[min]) min=j;
   }
   swap(arr[i],arr[min]);


}
cout << "after sorting";
for( int  i=0; i<n;i++){
    cout<<arr[i]<<endl;
}


}