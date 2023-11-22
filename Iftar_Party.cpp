#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
 
template <typename T>
void rv(vector<T> &v, int t) { T x;
    forn(i,t) {
        cin>>x; v.pb(x);
    }
}

const ll MAX = 1e18;



 
 
void solve(){
    
        int t;
        cin >> t;
        for(int i = 0;i<t;i++){
            int piaju,left;
            cin >> piaju >> left;
            int n = piaju - left;
            vector<int> vec;
            for(int i = 1;(long long)i*i <= n;i++){
                if(n%i == 0) {
                    if(i > left)vec.pb(i);
                    if(i != n/i && left < n/i) vec.pb(n/i);
                }
            } 
            sort(vec.begin(),vec.end());
            cout << "Case " << i+1 << ": " ;
            if(vec.empty()){
                cout << "impossible" << endl;
                continue;
            }
            for(auto x : vec){
                cout << x << " ";
            }
            cout << endl;

        }

}
 
int main()
{
     solve();  
} 