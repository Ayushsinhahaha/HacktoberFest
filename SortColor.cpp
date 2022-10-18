class Solution {
public:
    //DUTCH NATIONAL FLAG ALGORITHM
    void sortColors(vector<int>& nums) {
        int lo=0, mid=0, hi=nums.size()-1;
        while(mid<=hi){
            if(nums[mid]==0){
                swap(nums[lo], nums[mid]);
                lo++, mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid], nums[hi]);
                hi--;
            }
        }
    }
    
  /*  void sortColors(vector<int>& nums) {
        int lo=0, mid=0, hi=nums.size()-1;
        while(mid<=hi){
            switch(nums[mid]){
                case 0:
                    swap(nums[lo++], nums[mid++]);
                    break;
                
                case 1:
                    mid++;
                    break;
                
                case 2:
                    swap(nums[mid], nums[hi--]);
                    break;
            }
        }
    }  */
};