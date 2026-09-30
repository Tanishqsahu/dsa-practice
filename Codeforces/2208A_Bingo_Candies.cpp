#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void solve(){

    int n;
    cin>>n;
    map <int,int> freq;
    int max_freq=0;
    for(int i=0;i<n*n;i++){
        int color;
        cin>>color;
        freq[color]++;
        max_freq=max(max_freq,freq[color]);
        
    }

    if(n==1){
        cout<<"NO\n";
        return;
    }
    if(max_freq>(n*n-n)){
        cout<<"No\n";
    }
    else{
        cout<<"YES\n";
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