//Program to print pairs of elememts
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Pairs of elements: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }

    return 0;
}
