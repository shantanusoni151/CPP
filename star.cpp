#include <iostream>
using namespace std;

int main() {
    int n = 4; // rows
    int m = 5; // columns

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}