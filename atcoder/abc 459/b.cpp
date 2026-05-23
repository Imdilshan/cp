/*
 * Use elif ladder for particualar range value and concatenate the answer.
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
  string cnt = "";
  for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    if(s[0] == 'a' || s[0] == 'b' || s[0] == 'c' ) cnt += '2';
    else if(s[0] == 'd' || s[0] == 'e' || s[0] == 'f' ) cnt += '3';
    else if(s[0] == 'g' || s[0] == 'h' || s[0] == 'i' ) cnt += '4';
    else if(s[0] == 'j' || s[0] == 'k' || s[0] == 'l' ) cnt += '5';
    else if(s[0] == 'm' || s[0] == 'n' || s[0] == 'o' ) cnt += '6';
    else if(s[0] == 'p' || s[0] == 'q' || s[0] == 'r' || s[0] == 's' ) cnt += '7';
    else if(s[0] == 't' || s[0] == 'u' || s[0] == 'v' ) cnt += '8';
    else if(s[0] == 'w' || s[0] == 'x' || s[0] == 'y' || s[0] == 'z' ) cnt += '9';
  }
  cout << cnt << endl;
}

signed main(){
  fastio;
  solve();
  return 0;
}
