static int compute(int n,int values[],int size)
        {
            int c=0;
            for(int i=0;i<size;i++)
            {
                int p=values[i] * n +c;
                values[i]=p%10;
                c=p/10;
            }
            boolean b=false;
            if(c!=0)
                b=true;
            while(b)
            {
                values[size]=c%10;
                c=c/10;
                size++;
                if(c==0)
                b=false;
            }
            return size;
        }
    
    // Complete the extraLongFactorials function below.
    static void extraLongFactorials(int n) {
        
        int values[]=new int[500];
        values[0]=1;
        int size=1;
        for(int i=1;i<=n;i++)
        size=compute(i,values,size);
        
        for(int i=size-1;i>=0;i--)
            System.out.print(values[i]);
            

    }
