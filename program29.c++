#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int image[100][100];

    // Input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> image[i][j];
        }
    }

    // Flip and invert
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = image[i][j];
            image[i][j] = image[i][n - 1 - j];
            image[i][n - 1 - j] = temp;
        }

        // Invert
        for (int j = 0; j < n; j++) {
            image[i][j] = 1 - image[i][j];
        }
    }

    // Output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}