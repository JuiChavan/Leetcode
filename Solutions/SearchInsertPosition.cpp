class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            vector <int> ::iterator itr1; 
            int val,index=0;
            for(itr1=nums.begin();itr1!=nums.end();itr1++){
                if(*itr1==target){
                    return index;
                }
                else if(*itr1 < target){
                    index++;
                }
                }
        
         return index;       
        }
    };
    
