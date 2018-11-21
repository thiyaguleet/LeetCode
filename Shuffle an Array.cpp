#include <random>
#include <chrono> 
class Solution {
public:
    vector<int> original;
    Solution(vector<int> nums) {
        this->original=nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return this->original;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
         vector<int> random{ this->original };
         random_shuffle( random.begin(), random.end() );
         return random;
    }
};
