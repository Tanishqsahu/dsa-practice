#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    int x;
    cin >> n >> x;
    int prev = 0;
    int ans = 0;
    int a;
    for(int i=0; i<n; i++){
        cin >> a;
        ans=max(ans,a-prev);
        prev = a;


        


    }
    ans=max(ans,2*(x-prev));
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