#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    vector <long long> v(3);
    cin>>v[0]>>v[1]>>v[2];
    sort(v.begin(),v.end());
    long long range_initial = v[2] - v[0];
    long long range_after_one_op = v[1];

    cout << min(range_initial, range_after_one_op) << "\n";

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

