/* Author -> highfive */
#include <bits/stdc++.h>
using namespace std;

/* To Make I/O faster */
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);

/* Macro */
#define int long long
#define ld long double
#define pb push_back
#define endl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

/* Containers */
typedef pair<int,int> pi;
typedef map<int,int> mpi;
typedef priority_queue<int> mxpq;
typedef priority_queue<int, vector<int>, greater<int>> mnpq;

const int N = 1e5;

void solve(){
  int x, y, k;
  cin >> x >> y >> k;
 
  int ans = 0;
  int z = y - x;
  int count = min(x+k-1, z);
  for(int i = x; i < count + 1; i++){
    ans += z % i;
  }
  
  if(x+k-1 > z){
    ans += (x+k - max(x, z+1)) * z;
  }
  cout << ans << endl;
}

signed main(){
  fastio;
  int tc;
  cin >> tc;
  
  while(tc--){
    solve();
  }
  
  return 0;
}