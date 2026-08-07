#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i = 0; i < 5; i++)
{
    cin>>arr[i];
}
for(int i=0; i<5; i++)
{
        if(arr[i] % 2 == 0)
        {
            arr[i] = arr[i] + 5;
        }
        else
        {
            arr[i] = arr[i] + 10;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}