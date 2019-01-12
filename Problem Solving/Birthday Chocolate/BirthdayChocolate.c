// Complete the solve function below.
int solve(int s_count, int* s, int d, int m) {
    int i,j,sum,c=0;    
    for(i=0;i<=(s_count-m);i++)
    {
        sum=0;
        for(j=i;j<(i+m);j++)
        {
            sum +=s[j];
        }
        if(sum==d)
            c++;
    }

    return c;
}
