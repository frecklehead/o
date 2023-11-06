#include<bits/stdc++.h>
using namespace std;
class Employee{
  public://using public access modifiers
    //attributes that the employee has such as a name.
    string name;
    string company;
    int age;
    //method is the behivour
    void introduceyourself(){
        cout<<name<<" "<<company <<" "<<age;
;    }
//creating your own constructor
Employee (string Name, string Company, int Age ){
    name=Name;
    company=Company;
    age=Age;
}

};
int main (){
    int number;
    //creating an object of the class.

    //when you create  your own constructor then the default is no longer in practice
    //providing the data to your constructor
    Employee employee4= Employee("Prashamsa","Google",14);
    employee4.introduceyourself();
    // Employee employee1;//deffault constructor is envoked if no value is assigned to the attributes of the class.
    //incase you dont case a constructor of your own.
    //constructor is a method but it has no return type, costoructor has the same name as the class and it needs to be public.
    // (employee1.)->you wont be able to see the attributes, everything inside the slass in c+= are private;
    //access modifers
   // private--> whatever is private inside your class wont be accessiblel outside of your class
   //public--> whatever is inthe public class , all the public class members will be accessible outside of the class
   //protected-->in between private and public.
   //everything inside your clss is private by default
   
   //A constructor is a special type of method that id invoked each time that an object of a class is created.



/* Encapsulation
idea of bundling of data and methods that operate on that dat and are grouped in thee class
we do this to interact to with the methods  but not modify
how do i  provide a way for other classes to interact the propertied of my class
i provide very specific public functions other class can enoke and interact with my data.
getters and setters
*/

}