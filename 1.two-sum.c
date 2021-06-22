/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    // int *ret = malloc(2*sizeof(int));
    // for(int i=0;i<numsSize;i++) {
    //     for(int j=0;j<numsSize;j++) {
    //         if(target == (nums[i]+nums[j])) {
    //             ret[0] = i;
    //             ret[1] = j;
    //             break;
    //         }
    //     }
    // }
    // returnSize = ret;
    // return 1;
        
        *returnSize=2;

        //returnarr is array I am making of size2
        int *returnarr=(int*)malloc(2*(sizeof(int)));
        for(int i=0;i<numsSize;i++)
        {
            for(int j=i+1;j<numsSize;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    returnarr[0]=i;
                    returnarr[1]=j;
                }
            }
        }
        for(int i=0;i<2;i++)
        {
            printf("%d",returnarr[i]);
        }
        return returnarr;    
}
// @lc code=end

