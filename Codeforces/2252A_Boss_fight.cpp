#include <iostream>
#include <vector>
#include <numeric>
#include <map>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int total_sum=0;
    int dominant_val = 0;
    vector <int> a(n);
    map<int,int> freq;
    int max_freq=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total_sum+=a[i];
        freq[a[i]]++;
        if(freq[a[i]]>max_freq){
            max_freq=freq[a[i]];
            dominant_val=a[i];
        }
    }
    int other_cards=n-max_freq;
    if(max_freq<=other_cards+1){
        cout<<total_sum<<"\n";
    }
    else{
        int usable_dominant=other_cards+2;
        int discarded=max_freq-usable_dominant;
        int ans=total_sum-(1LL*discarded*dominant_val);
        cout<<ans<<"\n";

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