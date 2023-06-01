#include<bits/stdc++.h>
using namespace std;

namespace Rakib {
    int age =24;
    void hello() {
        cout<< "Rakib namespaces" << endl;
    }
}


namespace Sakib {
    int age2 =2;
    void hello2(){     
        cout<< "Rakib namespaces" << endl;
    }
};


using namespace Rakib;
using namespace Sakib;


int main(){
    
  cout <<age <<endl;
  cout <<age2 <<endl;
return 0;
}



/* if both the age are same name like age then u can not use  using namespace  then u have to use Sakib::hello(); */