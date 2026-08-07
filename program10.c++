/*Conditional
1. Even and Odd Number in C programming
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter 5 numbers:\n";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < 5; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<"The "<<arr[i]<<" is even\n";
        }
        else
        {
            cout<<"The "<<arr[i]<< " is odd\n";
        }
    }
    
/*
2. Searching
1.Linear
*/
/*INT_MIN sabse choti element hoti hai cpp compiler mein*/
int a[5], key, flag = 0;
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            cout << "Element Found";
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element Not Found";
    }
    return 0;
}