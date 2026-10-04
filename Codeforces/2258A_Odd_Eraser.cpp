#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

long long gcd_val(long long a,long long b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;

}

void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<a[0]<<"\n";
        return;
    }
    else{
        cout<<gcd_val(a[0],a[n-1])<<"\n";
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