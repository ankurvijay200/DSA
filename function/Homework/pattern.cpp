#include <iostream>

using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        cout << i;
        for (int k = 1; k <= 2*(i-1)-1; k++) {
            cout << " ";
        }
        if (i != 1) {
            cout << i;
        }
        cout << endl;
    }
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        cout << i;
        for (int k = 1; k <= 2*(i-1)-1; k++) {
            cout << " ";
        }
        if (i != 1) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
