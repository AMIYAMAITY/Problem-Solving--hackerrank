// Complete the staircase function below.
void staircase(int n) {
  int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        printf(" ");
        for(k=j;k<n;k++)
        printf("#");
        printf("\n");
        
    }
    
}
