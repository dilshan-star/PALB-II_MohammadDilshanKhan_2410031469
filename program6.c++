#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    char temp;
    getline(cin,s);
    temp=s[0];
    s[0]=s[1];
    s[1]=temp;
    cout<<s[0]<<s[1];
   
}