#include <iostream>
#include <vector>
#include <string>
using namespace std;


void solve(){
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin >> s;
    int coin=0;
    for (int i=0;i<n/2;i++){
        char left=s[i];
        char right=s[n-i-1];

        if(left==right){
            continue;
        }
        
        
        else if(left!=c && right!=c){
            coin+=2;
        }

        else{
            coin+=1;
        }

    }

    cout<< coin <<"\n";

    


    

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