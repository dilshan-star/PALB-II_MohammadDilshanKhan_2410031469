#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[100][100];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    cout << "Diagonal Sum = " << sum << endl;

    return 0;
}