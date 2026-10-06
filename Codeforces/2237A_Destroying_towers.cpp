#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                a[j] = a[i];
                break; 
            }
        }
    }

    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += a[i];
    }

    cout << total_sum << "\n";
    
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