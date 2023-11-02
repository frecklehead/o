#include<iostream>
using namespace std;
int main (){
int n;
cin>>n;
int arr[n];
for ( int i=0; i<n;i++) cin>> arr[i];

int hashh[10000] ={0};
for( int i=0; i<n ;i++){
    hashh[arr[i]] +=1;
}
int number;
cout<<"want the frequency of";
cin>>number;
cout<<hashh[number];


}