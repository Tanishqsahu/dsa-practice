#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    long long big=0;
    long long count=0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            
            count+=b[i];
            big=max(big,a[i]);

        }
        else{
            count+=a[i];
            big=max(big,b[i]);
        }

        


    }
    cout<<count+big<<"\n";
    


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