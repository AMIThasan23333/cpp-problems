#include<iostream>
#include<utility>
using namespace std;

/* accessing value without * will not work, u have to pass by reference  */


void my_swap(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
 }
int main()
{
    int a,b;
    cin>>a>>b;
   my_swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}