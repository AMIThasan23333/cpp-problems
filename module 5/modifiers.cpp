

#include<bits/stdc++.h>
using namespace std;
int main(){

 
  string a = "hello";
  
   string b ="A";

   a +=b;

   a.append(b);

   cout << a << endl;

   a = "helloA"  /* WORKS */

   a = a + b;  /* works */

   a [5] = 'A' /* DONT WORKS  */

 


return 0;
}