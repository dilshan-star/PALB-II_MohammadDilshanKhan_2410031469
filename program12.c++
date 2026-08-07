#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i = 0; i < 5; i++)
{
    cin>>arr[i];
}
int sum1=0;
int sum2=0;
for(int i=0; i<5; i++)
{
    if(arr[i]%2==0)
    {
        cout<<" even ";
        sum1 = sum1+arr[i];
    }
    else
    {
        cout<<" odd ";
        sum2 = sum2+arr[i];
    }
}
cout<<sum1 <<" "<<sum2;
}