class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0;
        vector<bool> ans;
        for(int a: candies){
            if(max<a) max = a;
        }
        for(int a: candies){
            ans.push_back(max<=(a+extraCandies));
        }
        return ans;
    }
};