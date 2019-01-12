// Complete the sockMerchant function below.
    
    static int sockMerchant(int n, int[] ar) 
    {
       Arrays.sort(ar);
        int totalCounter=0,k,counter;
        for(int i=0;i<n-1;)
        {
            k =i+1;
            counter=1;
       
            
            
            while(ar[i]==ar[k])
           {
            counter++;
               k +=1;
                if(k==n)
                    break;
           }
            totalCounter +=(counter/2);
            i=k;
        }
       
        return totalCounter;
        
    }
