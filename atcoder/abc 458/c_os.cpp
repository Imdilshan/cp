/*
    Intuition and observation was 100% correct, implementation bhi shi kr liya tha,
    bs ye check krna reh gya ki kahin overflow to nhi kr rha, int ko long long convert
    kr lijye sir template me, ye issue dobara nhi chahiye..
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
  string s;
  cin >> s;

  vector<int> v;
  long long cnt = 0;
  int len = s.size();

  for(int i = 0; i < s.size(); i++){
    if(s[i] == 'C'){
      v.push_back(i);
    }
  }
  cnt += v.size();
  for(int i = 0; i < v.size(); i++){
    int val = min(v[i], len-v[i]-1);
    cnt += val;
  }
  cout << cnt;
}

signed main(){
  fastio;
  solve();
  return 0;
}
