/*
 * Either print the whole string skipping that particular position or build a string from scratch skipping that particular
 * position and then print the whole string
 */

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
  int n;
  cin >> n;
  n--;

  string s = "HelloWorld", si;

  for(int i = 0; i < s.size(); i++){
    if(i == n){
      continue;
    }
    else{
      si += s[i];
    }
  }

  cout << si << endl;

}

signed main(){
  fastio;
  solve();
  return 0;
}
