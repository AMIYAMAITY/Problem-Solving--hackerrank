// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(int ar_count, int* ar) {
    int i=0,b,c=0;
    b=ar[0];
    for(i=1;i<ar_count;i++)
    {
        if(b<ar[i])
            b=ar[i];
     
    }
    
     for(i=0;i<ar_count;i++)
    {
        if(b==ar[i])
            c++;
    }
    
    return c;
    
}
