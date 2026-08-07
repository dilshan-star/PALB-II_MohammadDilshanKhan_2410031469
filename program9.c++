//Sum of all the elements of array......
#include <iostream>
using namespace std;
int main(){
    int arr[5],sum=0;
    cout<<"Enter the elements of an array:"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        sum=arr[i]+sum;
    }
    cout<<"The Sum of all the elements of an array: "<<sum;
}