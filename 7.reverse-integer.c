/*
 * @lc app=leetcode id=7 lang=c
 *
 * [7] Reverse Integer
 *
 * https://leetcode.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (26.05%)
 * Likes:    4951
 * Dislikes: 7515
 * Total Accepted:    1.6M
 * Total Submissions: 6.1M
 * Testcase Example:  '123'
 *
 * Given a signed 32-bit integer x, return x with its digits reversed. If
 * reversing x causes the value to go outside the signed 32-bit integer range
 * [-2^31, 2^31 - 1], then return 0.
 * 
 * Assume the environment does not allow you to store 64-bit integers (signed
 * or unsigned).
 * 
 * 
 * Example 1:
 * Input: x = 123
 * Output: 321
 * Example 2:
 * Input: x = -123
 * Output: -321
 * Example 3:
 * Input: x = 120
 * Output: 21
 * Example 4:
 * Input: x = 0
 * Output: 0
 * 
 * 
 * Constraints:
 * 
 * 
 * -2^31 <= x <= 2^31 - 1
 * 
 * 
 */

// @lc code=start


int reverse(int x){
    int     chg = 0;
    int     revval = 0;
    long    overlen = 0;
    int     i,len = 0;
    unsigned char    a[10] = {0};


    if(x < 0) {
        x = (int)(~((unsigned int) x - 1));
        chg = 1;
    }

    for(i=0;i<10;i++) {
        a[i] = x % 10;
        x = x / 10;
//        printf("a[%d] = %d \n",i,a[i]);
        if(x==0) {
            break;
        }
    }
    overlen = 0;
    for(len=0; len<=i;len++) {
        overlen = overlen*10 + a[len];
 //       printf("revval = %d ,a[%d] = %d \n",overlen,len,a[len]);
        if(overlen > 0x7fffffff) {
            return 0;
        }
    }
    revval = overlen;
    if(chg) {
        revval = -revval;
 //       printf("chg = %d revval = %d\n",chg,revval);
    }

    return revval;
}
// @lc code=end

