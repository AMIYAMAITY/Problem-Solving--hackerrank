// Complete the utopianTree function below.
    static int utopianTree(int n) {
                 if(n==0)
                    return 1;
                 if(n%2==0)
                    return 1+utopianTree(n-1);
                else
                    return 2*utopianTree(n-1);
     }
