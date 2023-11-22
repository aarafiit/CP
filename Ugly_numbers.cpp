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
    
        

    
    vector<ll> ugly_nums;
    ll p2 = 1;
    for (int x = 0; p2 <= MAX; x++, p2 *= 2) {
        // p2 = 2^x
        ll p3 = 1;
        for (int y = 0; p2 * p3 <= MAX; y++, p3 *= 3) {
        // p3 = 3^y
        ll p5 = 1;
        for (int z = 0; p2 * p3 * p5 <= MAX; z++, p5 *= 5) {
            // p5 = 5^z
            ugly_nums.push_back(p2 * p3 * p5);
        }
        }
    }
    sort(ugly_nums.begin(), ugly_nums.end());
    cout << "The 1500'th ugly number is " << ugly_nums[1500 - 1] << ".\n";

  

    


    


}
 
int main()
{
     solve();  
} 