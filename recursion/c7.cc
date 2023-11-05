
/*stl- standard template library
#include<bits/stdc++.h>
algorithms
functions
coontainers
iterators



*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispalindrome( string s){
  string j;
  for( int i=0;i<s.length();i++){
   if( (s[i]>=65 &&s[i]<=90)||(s[i]>=97 &&s[i]<=122) || (s[i]>=48 &&s[i]<=57))  
   
   { s[i]=tolower(s[i]);
      j+=s[i];

   }
  }   
  string l=j;
 reverse(j.begin(),j.end() );
  if( j==l) return  true;
  else return false;
        } 
int main (){
// //      pair <int ,int > p={1,3};
// //     cout<<p.first <<p.second;
// //     pair <int , int > arr[]={{1,3},{2,3}};
// //     cout << arr[1].second;
    
// //     //vector is a container which is dynamic  in nature.
// //     /*
// //     arrays have a constant size. so 
// //     you cannot change its size in the 
// //     ,middle of the problem, so there is
// //      the use  of vectors
// //      we can always increse or decrease the sixze of the 
// //      vectors
// //      so for the data structure where we dont knpw the sixe of he
// //      size of  data structure thasts where  we use vectors
       
// //        declaration: vector <datatyoe> variable naeme

// //     */

// //    vector<int > v;
// //    v.push_back(1);
// //    v.emplace_back(2);
// //    vector<pair <int ,int>> vi;
// //    vi.push_back({1,2});
// //    vi.emplace_back(1,3);// you dont require to add the curly braces;
//    vector<int > pola (5 ,90);// (no of the indexes , value for index) {90,90,90,90,90l,90}copy of pola;
// //  cout<< pola[0];
// //  //accessing the vector  elements using itrators
// //  vector<int>::iterator it = v.begin();

// //  cout<<*(it)<<endl;
// //  vector<int>:: iterator  i = v.end();//points to the memory just after the last elements so i-- gies the last digit

// //  i--;
// //  cout<< *(i); 
// //  cout<< v.back();//printing the last charactor
// // cout<<endl;
     
// //      for( vector<int>::iterator x = pola.begin(); x !=v.end();x++){
// //         cout<<*(x)<< endl;//iterator  reads the memory of the tthe vector elements
// //      }
     
// //      for (auto p= pola.begin();p!=v.end();p++){
// //         cout<<*(p);
// //      }
// //      for( auto k: pola){
// //         cout<<endl;
// //         cout<<k;
// //      }

     
//      // for( auto  variable_name :  vector ){ cout << variable ( no   need  for the  * for  this time )}
//      pola.erase( pola.begin()+1);
//      pola.erase( pola.begin ());
//      pola.push_back(3);
//      pola.erase( pola.begin()+1 , pola.begin ()+3);

//      for( auto  v: pola){
//         cout<<v;
//      }
string s;
cout<<"enter the string";
cin>>s;
 cout << ispalindrome(s);
     
     }
 