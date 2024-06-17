class Solution {
public:
    bool judgeSquareSum(int c) {

if(c==1)
{
    return true;
}
        long  i=0;
        long j=sqrt(c);
        while(i<=j)
        {
            long long num=(i*i)+(j*j);
            if(num==c)
            {
                return true;
            }
          if(num>c)
          {
            j--;
          }
          else
          {
            i++;
          }
        }
        return false;
    }
};