#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long current_sum=0;
    bool possible=true;
    
    for(int i=0;i<n;i++){
        current_sum+=a[i];
        long long k=i+1;
        long long min_required=(k*(k+1))/2;
        if(current_sum<min_required){
            possible=false;
            break;
        }
    }

    if(possible){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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