static int max(int a[],int n)
{
    int i,k,c=0;
    k=a[0];
    for(i=1;i<n;i++)
    {
        if(k<a[i])
        {
            k=a[i];
            c++;
        }
    }
    
    return c;
}

static int min(int a[],int n)
{
    int i,k,c=0;
    k=a[0];
    for(i=1;i<n;i++)
    {
        if(k>a[i])
        {
            k=a[i];
            c++;
        }
    }
    
    return c;
}
 // Complete the breakingRecords function below.
    static int[] breakingRecords(int[] scores) {

    int a[]=new int[2];
    
    int highest=max(scores,scores.length);
    int lowest=min(scores,scores.length);
        
    a[0]=highest;
    a[1]=lowest;
    return a;
    }
