//Find the sum of even with 5 and odd number with 10:
#include <iostream>
using namespace std;
int main() {
    int arr[5];
    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            arr[i]=arr[i]+5;
            evenSum = evenSum + arr[i];
        } else {
            arr[i]=arr[i]+10;
            oddSum = oddSum + arr[i];
        }
    }
    cout << "Sum of even numbers with 5: "<<evenSum<< endl;
    cout << "Sum of odd numbers with 10: "<<oddSum<<endl;
    return 0;
}