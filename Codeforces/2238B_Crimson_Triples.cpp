#include <iostream>

using namespace std;

void solve(){
    int n;
    cin>>n;
    long long total_crimson = 0;
    for (int b=1;b<=n;b++){
        int multiples= n/b;
        total_crimson += 1LL*multiples*multiples;
    }

    cout<<total_crimson<<"\n";


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

