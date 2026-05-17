/*
 * The brute force is extremely slow, notice the function is montonic valid values are in increasing order
 * so we just have to find the range.
 * Also we can invert the question from [l, r] : l <=  x^k <= r  to l^(1/k) <= x <= r^(1/k).
 * This range is much smaller to compute also the answer will be just r - l + 1, same as base case for k = 1.
 */

#include<bits/stdc++.h>
class Solution {
public:

    long long power(long long val, int k){
        long long temp = 1;
        for(int i = 0; i < k; i++){
            if(temp > 1e18 / val) return 1e18;
             temp *= val;
        }
        return temp;
    }

    int countKthRoots(int l, int r, int k) {
        if(k == 1){
            return (r-l+1);
        }
        else{
            long long l1 = pow(l, 1.0/k);
            long long r1 = pow(r, 1.0/k);

            while(power(l1, k) < l){
                l1++;
            }
            while(l1 > 0 && power(l1-1, k) >= l){
                l1--;
            }


            while(power(r1,k) > r){
                r1--;
            }
            while(power(r1+1, k) <= r){
                r1++;
            }

            if(r1 < l1) return 0;

            return (r1 - l1 + 1);

        }
    }
};
