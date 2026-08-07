//Input an intger and a string and print 1st n character of string
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}