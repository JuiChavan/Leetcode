/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.*/
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
    
