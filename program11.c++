#include<iostream>
using namespace std;
int main(){
    int arr[5],mul=1;
    cout<<"Enter the elements of Arrays"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        mul=mul*arr[i];
    }
    cout<<"Multiplication of the arrays are: "<<mul;
}