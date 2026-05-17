/*
 * The Question is about finding out median N times, for array with size 2*N+1, N = 10^5.
 *
 * Editorial: (Two heap median maintance technique)
 * First think how do we find median, we sort the numbers go to the middle element(odd size) and return it.
 * can we do something better so we dont have to resort array after every insertion ?
 * Can we split the array into two parts:
 * part1 -> Has size (N/2 + 1)
 * part2 -> Has size(N/2)
 * Let assume (x E part1), (y E part2), so store values such that (x >= y) for every x & y.
 * if at any point |part1| > |part2| + 1
 *  - move the smallest element of part1 to part2
 * else if at any point |part2| >= |part1|
 *  - move the largest element of part2 to part1
 * so if we balance it correctly for all values, the median will always be the minimum of part1.
 *
 * General Formula ->||part1| - |part2|| <= 1
 *
 * Implementation:
 *  Make two heaps(priority queue)
 * - For part1 (min heap)
 * - For part2 (max heap)
 * and balance using the if else case
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
typedef priority_queue<int> mxpq; // min heap
typedef priority_queue<int, vector<int>, greater<int>> mnpq; // min heap

const int N = 1e5;

void add(int value){

}

void solve(){
  int x, q;
  cin >> x >> q;

  priority_queue<int> L;
  priority_queue<int, vector<int>, greater<int>> R;
  R.push(x);

  auto add = [&](int val){
    if(val >= R.top()){
      R.push(val);
    }
    else{
      L.push(val);
    }

    if(R.size() > L.size()+1){
      L.push(R.top());
      R.pop();
    }
    if(L.size() > R.size()){
      R.push(L.top());
      L.pop();
    }
  };

  while(q--){
    int u, v;
    cin >> u >> v;
    add(u), add(v);
    cout << R.top() << endl;
  }
}

signed main(){
  fastio;
  solve();
  return 0;
}
