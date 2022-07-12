class Solution {
    
private:
    
    void combinationSum(vector<vector<int>> &list , vector<int> &nums, vector<int> &ds ,int k ,int n , int ind){
        if(ind==nums.size()){
            if(ds.size()==k && n==0){
                list.push_back(ds);
            }
            return;
        }
        
        ds.push_back(nums[ind]);
        n=n-nums[ind];
        combinationSum(list , nums , ds ,k ,n ,ind+1);
        ds.pop_back();
        n+=nums[ind];
        
        combinationSum(list , nums , ds , k , n ,ind+1);
        
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> list;
        vector<int> nums;  
        vector<int> ds;
        for(int i=1;i<10;i++){
            nums.push_back(i);
        }
        combinationSum(list ,nums , ds , k , n,0);
        
        return list;
    }
};
