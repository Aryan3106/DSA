class Solution {
public:
    long long findMaxEl(vector<int>& piles){
            int maxi = 0; 
            long long  n = piles.size();
            for(int i = 0 ; i < n ; i++){
                maxi = max(maxi , piles[i]);
            }
            return maxi; 
        }

        long long calculateTotalHrs(vector<int>& piles , int hourly){
           long long  totalHr = 0; 
            long long  n = piles.size();
            for(long long i = 0 ; i < n ; i++){
                totalHr += ceil((double)piles[i]/(double)hourly);
            }
            return totalHr; 
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long  low = 1; 
        long long  high = findMaxEl(piles); 
        while(low <= high){
           long long   mid = (low+high)/2;
           long long  totalHr = calculateTotalHrs(piles , mid);
            if(totalHr <= h){
                high = mid - 1; 
            }
            else{
                low = mid + 1; 
            }
        }
        return low; 

    }
};