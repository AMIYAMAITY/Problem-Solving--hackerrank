 /*
     * Complete the pageCount function below.
     */
    
    static int forword(int n,int p)
    {
        int c=0;
        for(int i=0;i<p+1;i +=2)
        {
            if((i==p) || (i+1==p))
            break;
            else
            c++;
        }
        return c;
    }
    
    static int backword(int n,int p)
    {
        int c=0;
        for(int i=n;i>p-1;i -=2)
        {
            if((i==p) || (i-1==p))
            break;
            else
            c++;
        }
        return c;
    }
    static int pageCount(int n, int p) {
       if(n%2==0)
           n=n+1;
       int div=n/2;
        if(div==p || div>p)
            return forword(n,p);
        else
            return backword(n,p);
    }
