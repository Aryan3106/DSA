class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int n = nums.size();

       for(int i = 0 ; i < n ; i++){
        bool foundDup = false; 

        for(int j = 0 ; j < n ; j++){
             if(i == j) continue; 

        if(nums[i] == nums[j]){
            foundDup = true ; 
            break;
        }
       }

       if(!foundDup){
        return nums[i];
       }
        
    }
    return -1;
    }
        

       
};