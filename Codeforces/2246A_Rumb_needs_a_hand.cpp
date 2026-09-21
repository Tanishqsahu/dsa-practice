#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int l = 0, r = n - 1;
    bool possible = true;

    while (l < r) {
        while (l < r && p[l] == l + 1) {
            l++;
        }
        while (l < r && p[r] == r + 1) {
            r--;
        }

        if (l >= r) {
            break;
        }

        if (p[l] == r + 1 && p[r] == l + 1) {
            l++;
            r--;
        } else {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}