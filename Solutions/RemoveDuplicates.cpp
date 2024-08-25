/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator itr1;
        vector<int>::iterator itr2;
        int c=0;
        for(itr1=nums.begin();itr1!=nums.end();itr1++){
          for(itr2=itr1+1;itr2!=nums.end();itr2++){
            if(*itr1==*itr2){
                nums.erase(itr2);
                --itr2;}
           
            }  
        } 
    return nums.size();
}
};
