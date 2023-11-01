//  check whether its a palindrome or not

#include<iostream>
using namespace std;

// madam //madan
// 0123
//i>=n/2

void palin(string& str, int i){
if(i>=str.length()/2) {
    cout<<"its a palindrome" ; 
    return;
}
    if( str[i] != str[str.length()-1-i ]){
    cout<<"its not a palindrome";
    return;
   
     }
     palin(str, i+1);

}
int main (){
   string str;
    cout<<"enter the string";
    cin>>str;
    palin( str,0);
return 0;
}