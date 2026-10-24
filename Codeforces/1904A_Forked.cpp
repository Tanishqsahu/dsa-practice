#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve(){
    long long a,b;
    cin >> a >> b;
    long long xK, yK;
    cin >> xK >> yK;
    long long xQ, yQ;
    cin >> xQ >> yQ;

    vector<pair<long long,long long>> directions = {
        {a,b},{-a,b},{a,-b},{-a,-b},
        {b,a},{-b,a},{b,-a},{-b,-a}
    };
    set<pair<long long,long long>> king_attacks;
    set<pair<long long,long long>> queen_attacks;
    for(auto d:directions){
        king_attacks.insert({xK+d.first,yK+d.second});
        queen_attacks.insert({xQ+d.first,yQ+d.second});


    }
    int common_forks = 0;
    for(auto pos:king_attacks){
        if(queen_attacks.count(pos)){
            common_forks++;
        }

    }
    cout << common_forks << "\n";

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