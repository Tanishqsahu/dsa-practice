#include <iostream>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    long long ans = 2 * (k - 1) + (1LL << (n - k + 1));

    cout << ans << "\n";
    

    
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