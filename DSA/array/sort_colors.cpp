class Solution{
    public:
    void(sortColors(vector<int>& nums)){
        int count_o = 0,count_1 = 0,count_2 = 0; 
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 0){
                count_o++;}
            else if(nums[i] == 1){
            }
            else{
                count_2++;}
        }
        for(int i = 0; i< count_o;i++){
            nums[i] = 0;
        }
        for(int i = count_o; i< count_o + count_1;i++){
            nums[i] = 1;
        }
        for(int i = count_o + count_1; i< nums.size();i++){
            nums[i] = 2;
        }
    }
};
             
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0, m = 0, r = n-1;
int i;
        while(m<=r)
        { int check = nums[m];
            if(check == 0)
            {
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(check==1)
            {
                m++;
            }
            else {
                swap(nums[m],nums[r]);
                r--;
            }
        }
    }
};