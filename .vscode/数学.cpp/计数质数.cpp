class Solution {
public:
    int countPrimes(int n) {
        //埃塞法
        bool *num = new bool[n]();
        int ret=0;
        for(int i=2;i<n;i++)
        {
            if(!num[i])
            {
                for(int j=i;j<n;j+=i)
                {
                    num[j]=true;
                }
                ret++;
            }
        }
        return ret;
    }
};