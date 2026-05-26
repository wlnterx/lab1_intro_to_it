#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 3;
    int matrica[n][n];
    int maxznach = INT_MIN;
    int minznach = INT_MAX;
    int maxstr = 0;
    int minstr = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrica[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int proizved = 1;
        for (int j = 0; j < n; j++) {
            proizved *= matrica[i][j];
        }
        if (proizved > maxznach) {
            maxznach = proizved;
            maxstr = i;
        }
        if (proizved < minznach) {
            minznach = proizved;
            minstr = i;
        }
    }

    cout << maxstr + 1 << endl;
    cout << maxznach << endl;
    for (int j = 0; j < n; j++) {
        cout << matrica[maxstr][j] << " ";
    }
    cout << endl;
    cout << minstr + 1 << endl;
    cout << minznach << endl;
    for (int j = 0; j < n; j++) {
        cout << matrica[minstr][j] << " ";
    }
    cout << endl;

    return 0;
}