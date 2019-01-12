int chechRegion(int s,int t,int c)
{
    
    return (s<=c && c<=t)?1:0;
    
}

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {

    int or=0,ap=0,i;
    for(i=0;i<apples_count;i++)
    if(chechRegion(s,t,(a+apples[i])))
            ap++;

    for(i=0;i<oranges_count;i++)
    if(chechRegion(s,t,(b+oranges[i])))
            or++;

    printf("%d\n",ap);
    printf("%d",or);

}
