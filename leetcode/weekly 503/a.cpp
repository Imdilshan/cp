/*
 * Each distinct element should appear atmost k times.
 * Create a frequency array, for each element maxFreq = min(freq, k)
 */

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> freq(101, 0), ans;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        for(int i = 0; i < freq.size(); i++){
            if(!freq[i]) continue;

            freq[i] = min(freq[i], k);
            while(freq[i]--){
                ans.push_back(i);
            }
        }

        return ans;

    }
};
