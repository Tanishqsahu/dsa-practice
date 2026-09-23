#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i =0;i<n;i++){
        cin>>p[i];
    }
    
    sort(p.rbegin(),p.rend());

    for(int i=0;i<n-1;i++){
        if(p[i]==p[i+1]){
            cout<<-1<<"\n";
            return;
        }

    }

    for(int i=0;i<n;i++){
        cout<<p[i]<<(i+1==n? "":" ");

    }
    cout<<"\n";
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