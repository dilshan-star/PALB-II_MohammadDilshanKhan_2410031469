//Find the minimum number in the array
#include<iostream>
using namespace std;
int main(){
    int arr[5], min;
    cout<<"Enter the element of an array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        
    }
    min=arr[0];
    for(int i;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The minimum element of an array is: "<<min;
    return 0;
}