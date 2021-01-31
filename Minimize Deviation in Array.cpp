class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        // set is sorted by default in ascending order 
        set<int> s;
        
        // execute operation 1 ==> multiply all the odd numbers by 2
        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] % 2 == 0){
                s.insert(nums[i]);
            }
            else {
                s.insert(2 *nums[i]);      
            }
        }
        
        // difference between max and min
        int diff = *s.rbegin() - *s.begin();
        
        // execute operation 2 ==> divide the maximum even number 
        while((int)s.size() > 0 && *s.rbegin() % 2 == 0){
            
            int max_element = *s.rbegin(); 
            s.erase(max_element);
            s.insert(max_element / 2);
            
            diff = min(diff, *s.rbegin() - *s.begin());
        }
        
        return diff;
    }
};
