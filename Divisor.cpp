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





 
 
void solve(){
    
        

    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        if(n%i == 0) cout << i << " " ;
    }

    cout << endl;

    vector<int> divs;

    for(int i = 1;i*i <=n ;i++){
        if(n%i == 0){
            divs.push_back(i);
            if(i != n/i) divs.push_back(n/i);
        }
    }
    sort(divs.begin(),divs.end());
    for(auto i : divs) cout << i << " ";

    


    


}
 
int main()
{
     solve();  
} 