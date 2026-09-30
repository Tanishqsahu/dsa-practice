#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    map <int,int> freq;
    int max_initial=0;
    int odd_count=0;
    int mod40_count=0;
    int mod42_count=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        freq[p[i]]++;
        max_initial=max(freq[p[i]],max_initial);
        if(p[i]%2!=0){
            odd_count++;
        }
        else{
            if(p[i]%4==0){
                mod40_count++;
            }
            else{
                mod42_count++;
            }
        }


    }

    int ans=max({max_initial,mod40_count,mod42_count,odd_count});
    cout<<ans<<"\n";
    


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