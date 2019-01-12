// Complete the plusMinus function below.
void plusMinus(int arr_count, int* arr) {
        int i,p=0,n=0,z=0;
    for(i=0;i<arr_count;i++)
    {
        if(arr[i]>0)
            p++;
        if(arr[i]<0)
            n++;
        if(arr[i]==0)
            z++;  
    }
    
    printf("%f\n",(p/(float)arr_count));
    printf("%f\n",(n/(float)arr_count));
    printf("%f",(z/(float)arr_count));

}
