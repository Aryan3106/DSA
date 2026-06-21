class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int currentSum = 0;
        // Map to store (prefixSum, frequency)
        unordered_map<int, int> prefixSumMap;
        
        // Base case: a sum of 0 exists once
        prefixSumMap[0] = 1;
        
        for (int num : nums) {
            currentSum += num;
            
            // Check if (currentSum - k) exists in the map
            if (prefixSumMap.find(currentSum - k) != prefixSumMap.end()) {
                count += prefixSumMap[currentSum - k];
            }
            
            // Update the frequency of the current sum
            prefixSumMap[currentSum]++;
        }
        
        return count;
    }
};