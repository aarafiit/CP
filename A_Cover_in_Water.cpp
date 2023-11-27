#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 1;i<s.size()-1;i++){
        if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.') {
            ans = 2;
            cout << ans << endl;
            return;
        }
        else if(s[i] == '.') ans++;
    }

    if(s[0] == '.') ans++;
    if(s[n-1] == '.' &&  s.size() >1 ) ans++;

    cout << ans << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}