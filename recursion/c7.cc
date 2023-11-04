
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
int main (){
     pair <int ,int > p={1,3};
    cout<<p.first <<p.second;
    pair <int , int > arr[]={{1,3},{2,3}};
    cout << arr[1].second;
    
    //vector is a container which is dynamic  in nature.
    /*
    arrays have a constant size. so 
    you cannot change its size in the 
    ,middle of the problem, so there is
     the use  of vectors
     we can always increse or decrease the sixze of the 
     vectors
     so for the data structure where we dont knpw the sixe of he
     size of  data structure thasts where  we use vectors
       
       declaration: vector <datatyoe> variable naeme

    */

   vector<int > v;
   v.push_back(1);
   v.push_emplace_back(2);
   vector<pair <int ,int>> vi;
   vi.push_back({1,2});
   vi.emplace_back(1,3);// you dont require to add the curly braces;
   vector<int > pola (5 ,90);// (no of the indexes , value for index) {90,90,90,90,90l,90}
vector <int >pola2(pola);//copy of pola;
 
    }

