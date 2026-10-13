#include <iostream>
#include <vector>

using namespace std;

void solve(){
    long long n,m;
    cin >>  n >> m;
    vector <long long> a(n);
    for (long long i = 0; i < n; i++){
        cin >> a[i];
    }
    vector <long long> b(m);
    for(long long i=0; i < m; i++){
        cin>>b[i];
    }
    
    long long hits_Beas = a[0]+n-1;
    long long hits_Ver = b[0]+m-1;

    if(hits_Beas >= hits_Ver){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
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