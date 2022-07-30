class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightSum = accumulate(nums.begin(),nums.end(), 0);
        int leftSum = 0 ;
        for(int i = 0 ; i <nums.size()  ; i++)
        {
            rightSum -= nums.at(i);
            if(rightSum == leftSum)
            {
                return i;
            }
            leftSum += nums.at(i);
        }
        return -1;
    }
};