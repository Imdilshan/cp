/*
 * given n -> size of array , q -> no. of queries. two operations 1 x, 2, y
 * 1 x -> add 1 to the position x and check whole array if min(array) = 1, decrement 1 from array
 * 2 y -> find no. of position with value >= y
 *
 * Naive approach:
 * actually counting -> O(n)
 * No. of queries : q, O(q)
 * tc : O(n * q)
 *
 * Editorial Genious:
 * Do not actually count, just observe:
 * incrementing all times checking min = 1 for all values and decrementing is same as "Maintaing a min global decrement"
 * when printing values just check if it is within bounds or not.
 *
 * Key learnings: Lazy Propagation || Lazy Update
 *
 * Implementation:
 * Frequency array
 * Counting array
 * Global Offset Technique || lazy update
 *
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

const int N = 3e5;

void solve(){
  int n, q;
  cin >> n >> q;

  vector<int> freq(N+1, 0), k(N+1, 0);
  int min = 0;

  for(int i = 0; i < q; i++){
    int x, y;
    cin >> x >> y;

    if(x == 1){
     freq[y]++;
     k[freq[y]]++;
     if(k[freq[y]] == n){
       min = freq[y];
     }
    }
    else{
      if(y+min > q) cout << "0" << endl;
      else cout << k[y+min] << endl;
    }
  }
}

signed main(){
  fastio;
  solve();
  return 0;
}
