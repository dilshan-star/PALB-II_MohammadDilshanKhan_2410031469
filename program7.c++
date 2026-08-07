//Arrays input and Output
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter The Element of Array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}