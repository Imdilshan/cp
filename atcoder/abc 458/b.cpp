/* Author -> highfive */
#include <bits/stdc++.h>
using namespace std;

/* To Make I/O faster */
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);

/* Macro */
#define ll long long
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
  int h, w;
  cin >> h >> w;
  int arr[h][w];
  // vector<vector<int>> arr(n-1, 0);

  if(h == 1 && w == 1){
    cout << 0 << endl;
    return;
  }

  if(h == 1){
      for(int i = 0; i < w; i++){
        if( (i > 0 && abs(w-1) >= 2) && i != w-1){
            arr[0][i] = 2;
        }
        else{
            arr[0][i] = 1;
        }
      }

      for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
          cout << arr[i][j] << " ";
        }
          cout << endl;
      }
      return;
  }

   if(w == 1){
      for(int i = 0; i < h; i++){
        if( (i > 0 && abs(h-1) >= 2) && i != h-1){
            arr[i][0] = 2;
        }
        else{
            arr[i][0] = 1;
        }
      }

      for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
        cout << arr[i][j] << " ";
        }
        cout << endl;
      }
      return;
  }

  for(int i = 0; i < h-1; i++){
    for(int j = 0; j < w-1; j++){
        arr[i][j] = 0;
    }
  }

  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
        if((i == 0 && j == 0) || (i == 0 && j == w-1) || (i == h-1 && j == 0) || (i == h-1 && j==w-1)) {
            arr[i][j] = 2;
        }
        else if( (i > 0 && i < h-1 && j == 0)   || (i == 0 && j > 0 && j < w-1) ||
                 (i > 0 && i < h-1 && j == w-1) || (i == h-1 && j > 0 && j < w-1) ){
            arr[i][j] = 3;
        }
        else{
            arr[i][j] = 4;
        }
    }
  }
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

signed main(){
  fastio;
  solve();
  return 0;
}
