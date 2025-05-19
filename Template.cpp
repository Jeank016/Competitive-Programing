#include <bits/stdc++.h>
 
#define forn(i,n) for (int i = 0; i < n; i++)
#define rforn(i,n) for (int i = n-1; i >= 0; i--)
#define fornP(i,a,b) for (int i = a; i  < b; i++)
#define endl '\n'
#define ff first
#define ss second   
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define sz(n) (int)n.size()
#define read(x) for(auto &el : x) cin >> el;
#define show(x) for (auto &i: x) cout << i << " "; cout << "\n";
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
 
using namespace std;
 
 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template<class T> using T_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class L> using T_multiset = tree<L, null_type, less_equal<L>, rb_tree_tag, tree_order_statistics_node_update>;
 
const double pi = 3.141592653589793;

void solve(){

}

int main(){
  int test = 1;
  cin >> test;
  while(test--) solve();
  return 0;
}
