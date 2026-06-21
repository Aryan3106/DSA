class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int currentSum = 0;
        
        unordered_map<int, int> prefixSumMap;
        
        
        prefixSumMap[0] = 1;
        
        for (int num : nums) {
            currentSum += num;
            
            
            if (prefixSumMap.find(currentSum - k) != prefixSumMap.end()) {
                count += prefixSumMap[currentSum - k];
            }
            
            
            prefixSumMap[currentSum]++;
        }
        
        return count;
    }
};