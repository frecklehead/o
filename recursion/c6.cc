#include<iostream>
using namespace std;
int main(){
string s;
getline(cin,s);
    int hashh[256]={0};
    for ( int i=0;i<s.size();i++){
       hashh[s[i]]++;
    }
    //fetch
    char ch;
    cout<<"character frequency";
  cin >> ch;

    cout<< hashh[ch];
    
     }
     
  