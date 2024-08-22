#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << "1" << endl;
        } else if (n == 2) {
            cout << "-1" << endl;
        } else {
            // Output the permutation [n, 1, 2, ..., n-1]
            cout << n << " ";
            for (int i = 1; i < n; i++) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
