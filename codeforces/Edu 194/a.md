
## My Approach
- Complicated, multiple edge cases, more easier to fall for...
```cpp
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
  
  int cnt0 = 0, cnt1 = 0;
  vector<int> arr(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i];
    if(arr[i] == 0) cnt0++;
    else cnt1++;
  }
  
  int req = 0;
  if(arr[0] == 1) req++;
  if(arr[n-1] == 1) req++;
  
  if(n == 2){
    if(req != 0){
      cout << -1 << endl;
    }
    else{
      cout << 0 << endl;
    }
  }
  else{
    if(req <= cnt0 && cnt0 >= 2){
      cout << req << endl;
    }
    else{
      cout << -1 << endl;
    }
  }
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
```


## Other's Solution:
- Simple, less cases, less intuitive
```cpp
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
  
  int cnt = 0;
  vector<int> arr(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i];
    if(arr[i] == 0) cnt++;
  }
  
  if(cnt < 2) {
    cout << -1 << endl;
  }
  else{
    cout << arr[0] + arr[n-1] << endl;
  }
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
```