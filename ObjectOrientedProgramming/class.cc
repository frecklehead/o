#include<bits/stdc++.h>
using namespaces std;
class Employee{
  public://using public access modifiers
    //attributes that the employee has such as a name.
    string name;
    string company;
    int age;
};
int main (){
    int number;
    //creating an object of the class.
    Employee employee1;
    // (employee1.)->you wont be able to see the attributes, everything inside the slass in c+= are private;
    //access modifers
   // private--> whatever is private inside your class wont be accessiblel outside of your class
   //public--> whatever is inthe public class , all the public class members will be accessible outside of the class
   //protected-->in between private and public.
   //everything inside your clss is private by default
    employee1.name="prashassa";
   employee1.company="Google";
   employee1.age=122;
   

}