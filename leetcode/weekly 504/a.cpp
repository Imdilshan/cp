/*
 * Give the sum of contribution of each digit in the number
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int digitFrequencyScore(int n) {
        int freq[10];
        vector<int> digit;
        int num = n;

        while(num > 0){
            int dig = num % 10;
            freq[dig]++;
            digit.push_back(dig);
            num = num/10;
        }

        int ans = 0;
        for(int i = 1 ; i <= 9; i++){
            ans += i * freq[i];
        }

        return ans;
    }
};
