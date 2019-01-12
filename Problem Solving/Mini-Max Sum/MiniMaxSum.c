// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) {
        int i,j;
        long long int result_arr[arr_count],r=0,b,s;
    for(i=0;i<arr_count;i++)
    {
        for(j=0;j<arr_count;j++)
        {
            if(i==j)
                continue;
            else
                r +=arr[j];
        }
        result_arr[i]=r;
        r=0;
    }
    
   s=result_arr[0];
    for(i=1;i<arr_count;i++)
    {
        if(s>result_arr[i])
            s=result_arr[i];
    }
    
    b=result_arr[0];
    for(i=1;i<arr_count;i++)
    {
        if(b<result_arr[i])
            b=result_arr[i];
    }
    printf("%lli %lli",s,b);
}
