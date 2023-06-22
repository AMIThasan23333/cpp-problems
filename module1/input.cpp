#include<iostream>
#include<string.h>
using namespace std;

/* to take input with space , do not take enter as input .  fgets take eneter as input  */

int main()
{
    char s[100];
    cin.getline(s,100);
    cout<<strlen(s);
    return 0;
}