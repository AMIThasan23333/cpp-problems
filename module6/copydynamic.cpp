#include<bits/stdc++.h>
using namespace std;


  class Person {
  public : 
     string name;
     int age;
     Person (string name, int age){
        this->name = name;
        this->age = age;
     }
  };

int main(){

    Person* rakib = new Person ("Rakib ahsan", 25);

    Person* sakib = new Person ("Sakib Ahmed", 23);

    rakib = sakib;

//    delete sakib;

   cout << rakib->age << " " << rakib->name << endl;


 
return 0;
}