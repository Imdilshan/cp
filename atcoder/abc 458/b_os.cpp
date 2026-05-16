// You just have to simply check if other tiles exist around the current tile
// my idea was same (observation was correct) but the implementation was SLOPPY to say the least...
// the editorial one is quite simple and sublime...
// just check the bounds and increment the value instead of hardcoding answer and handling multiple cases...


#include <bits/stdc++.h>
using namespace std;

int main(){

    int h, w;
    cin >> h >> w;

    int arr[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            arr[i][j] = 0;

            if(i-1 >= 0) arr[i][j]++;
            if(i+1 <= h-1) arr[i][j]++;
            if(j-1 >= 0) arr[i][j]++;
            if(j+1 <= w-1) arr[i][j]++;
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// This is also possible btw.. (kotatsugame)
/*
  for(int i=1;i<=H;i++)
	{
		for(int j=1;j<=W;j++)
		{
			cout<<(i>1)+(i<H)+(j>1)+(j<W)<<(j==W?"\n":" ");
		}
	}

	apparently thes boolean experessions x<y, return true or false which are 1 and 0 in cpp
	so you can perform arithmetic operations on them.. when using parenthesis..
 */
