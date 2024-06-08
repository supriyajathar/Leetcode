/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let num=0;
    let count=0;
    for(let x of nums)
    {
        if(x==1)
        {
            num++;
            // count=max(count,num);
            if(num>count)
            {
                count=num;
            }
        }
        else
        {
            num=0;
        }
    }
    return count;
    
};