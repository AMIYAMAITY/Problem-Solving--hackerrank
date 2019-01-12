// Complete the diagonalDifference function below.
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
        int i,j,lr=0,rl=0,k=0,r=0;
    for(i=0;i<arr_rows;i++)
    {
        lr += arr[i][i];
    }
    
    for(i=arr_columns-1;i>=0;i--)
    {
        rl += arr[k++][i];
    }
    r=abs(lr-rl);
    return r;
}
