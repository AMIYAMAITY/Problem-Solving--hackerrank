 // Complete the circularArrayRotation function below.
    static  int[] circularArrayRotation(int[] a, int k, int[] queries) {
            if(a.length!=k)
            {
                for( int i=0;i<k;i++)
                  {
                    int t=a[a.length-1];
                    for( int j=a.length-2;j>=0;j--)
                       {
                          a[j+1]=a[j];
                       }
                     a[0]=t;
                 }
            }
        
        int ar[]=new  int[queries.length];
        for( int i=0;i<queries.length;i++)
        {
            ar[i]=a[queries[i]];
        System.out.println(a[queries[i]]);
        }
        return ar;

    }
