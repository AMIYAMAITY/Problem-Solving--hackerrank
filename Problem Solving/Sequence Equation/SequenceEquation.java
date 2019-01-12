static int index(int[] p,int v)
    {
        int k;
        for(int i=0;i<p.length;i++)
        {
            if(v==p[i])
                return i+1;
        }
        return 0;
    }
    // Complete the permutationEquation function below.
    static int[] permutationEquation(int[] p) {
        int ar[]=new int[p.length];
        for(int j=0;j<p.length;j++)
        ar[j]=index(p,index(p,j+1));
        return ar;

    }
