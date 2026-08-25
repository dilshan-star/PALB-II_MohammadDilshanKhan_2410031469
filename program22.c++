//program to move zeros to end
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,0,2,0,3,0,4,0};
    int n = 8, j = 0;

    for(int i = 0; i < n; i++)
        if(arr[i] != 0)
            swap(arr[i], arr[j++]);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}