// Complete the findDigits function below.
    static int findDigits(int n) {
        int m=n,c=0;
        while(n!=0)
            {
                int r=n%10;
                if((r!=0) && (m%r==0))
                c=c+1;
                n=n/10;
            }
        return c;

    }
