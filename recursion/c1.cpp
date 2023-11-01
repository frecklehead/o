
#include<iostream>
using namespace std;
int func (int n){
  if (n==0) return 0;
  else{
    cout<<n<<endl;
    return func(n-1);
  }  

 }
void sum (int  i){

}

 int main(){
  func(4);
  // func(1,6);
 
  return 0;
 }
