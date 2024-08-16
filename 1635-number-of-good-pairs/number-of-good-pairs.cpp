class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       map<int,int>m;
       int res = 0;
       for (int i : nums){
        if(m.count(i)){
            res+=m[i];
        }
             m[i]++;
       }
       return res;
    }
};