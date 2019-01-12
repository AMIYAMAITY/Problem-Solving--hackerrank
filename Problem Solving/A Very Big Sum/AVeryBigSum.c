// Complete the aVeryBigSum function below.
long aVeryBigSum(int ar_count, long* ar) {
        int i;
        long result=0;
    for(i=0;i<ar_count;i++)
    result +=*(ar+i);
return result;
}
