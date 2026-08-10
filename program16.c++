//Find the maximum number in array.
//INT_MIN is the smallest number
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the element of an array: "<<endl;
    for(int i=0;i<5;i++){
       cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The maximum number in the array: "<<max;
    return 0;
}