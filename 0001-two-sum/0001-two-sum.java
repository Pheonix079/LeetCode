class Solution {
    public int[] twoSum(int[] nums, int target) {
        int l = nums.length;
        
          int sum;
        for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                sum=nums[i]+nums[j];
                if(sum==target)
                {  return new int[]{i, j};}
                
            }
        }
        return new int[]{};
    }

}