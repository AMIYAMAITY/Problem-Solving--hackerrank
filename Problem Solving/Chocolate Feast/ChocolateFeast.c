// Complete the chocolateFeast function below.
int chocolateFeast(int n, int c, int m) {
    int w=n/c;
    int ch=w;
    while(w>=m)
    {
        w=w-m;
        if(w>=0)
        {
        ch=ch+1;
        w=w+1;
        }
    }
return ch;
}
