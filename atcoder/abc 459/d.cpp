/*
 * If any char is having a frequency > half of the string => No arrangement possible
 * else arrangement is possible
 *
 * one possible solution:
 * The element with most frequency is more likely to break arrangement so start building string with that only.
 * pick two highest occuring characters, make an arrangement and decrement their count, repeat until all characters
 * are exhausted.
 *
 * if one character remains at last just append it to the end, it will not distort the arrangement.
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
  int n = s.size();

  vector<int> freq(26, 0);
  for(auto x : s) {
    freq[x - 'a']++;
  }

  for(int x : freq) {
    if(x > (n + 1) / 2) {
      no;
      return;
    }
  }

  priority_queue<pair<int,char>> pq;
  for(int i = 0; i < 26; i++) {
      if(freq[i]) {
          pq.push({freq[i], char('a' + i)});
      }
  }

  string ans = "";
  while(pq.size() >= 2) {
    auto p1 = pq.top();
    pq.pop();

    auto p2 = pq.top();
    pq.pop();

    int cnt1 = p1.first;
    char ch1 = p1.second;

    int cnt2 = p2.first;
    char ch2 = p2.second;

    ans += ch1;
    ans += ch2;

    cnt1--;
    cnt2--;

    if(cnt1 > 0) {
        pq.push({cnt1, ch1});
    }

    if(cnt2 > 0) {
        pq.push({cnt2, ch2});
    }
  }

  if(!pq.empty()) {
    ans += pq.top().second;
  }

  yes;
  cout << ans << endl;
}

signed main(){
  fastio;
  int tt;
  cin >> tt;

  while(tt--){
     solve();
  }
  return 0;
}
