/*
     * Complete the getMoneySpent function below.
     */
    
    static int check(int[] a1, int[] a2, int b)
    {
        boolean flag=false;
        int sum=-1;
        int arr[]=new int[a1.length];
        int c=0;
        
        for(int i=a1.length-1;i>=0;i--)
        {
            for(int j=a2.length-1;j>=0;j--)
            {
                sum=a1[i]+a2[j];
                if(sum <= b )
                break;
                sum=-1;
            }
                arr[c++]=sum;
        }
        Arrays.sort(arr);
        return arr[arr.length-1];
        
    }
