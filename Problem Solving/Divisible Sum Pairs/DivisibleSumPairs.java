// Complete the divisibleSumPairs function below.
    static int divisibleSumPairs(int n, int k, int[] ar) {
             int i,j,c=0,sum;
        for(i=0;i<=(n-2);i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum =ar[i] + ar[j];
            if((sum%k)==0)
             c++;
             sum=0;
        }
    }
        
    return c;

    }
