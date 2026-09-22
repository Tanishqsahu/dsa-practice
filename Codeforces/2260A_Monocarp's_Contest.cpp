#include <iostream>
#include <vector>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int count=0;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
        if(p[i]==0){
            count++;
        }
    }
    
    if(count<2){
        cout<<-1<<"\n";
        return;
    }
    int swaps=0;
    if(p[0]==1){
        swaps++;
    }
    if(p[n-1]==1){
        swaps++;
    }

    cout<<swaps<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){ 
        solve();
    }
}