#include<iostream>

using namespace std;
bool isPalindrome (string s){
    
    for( int i=0; i< s.length();i++){
        if((s[i]<'A'|| s[i]>'Z')&&(s[i]<'a'|| s[i]>'z')&& (s[i]<48 || s[i]<57 ) ){
            s.erase(i,1);
            i--;
        }
    
    else if ( s[i]>='A' && s[i]<='z'){
        s[i]=s[i]+32;
    }}
     if( i>=s.length()/2) return true;
     if( s[i]!= s[s.length()-1-i]) return false;
     i++;
     return isPalindrome(s);
    

}
int main(){
   int  i=0;
 
    string s;
    cout<< "enter your string";
    cin>>s;
    isPalindrome(s);

}