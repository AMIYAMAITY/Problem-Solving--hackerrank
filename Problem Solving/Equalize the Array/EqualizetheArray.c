 // Complete the equalizeArray function below.
    static int equalizeArray(int[] arr) {
       Arrays.sort(arr);
        int r=0;
        for(int i=0;i<arr.length;i++)
        {
            int c=1;
            for(int j=i+1;j<arr.length;j++)
            {
            if(arr[i]==arr[j])
            c++;
            else
              break;
            }
           if(c > r)
               r=c;
            
        }
        return arr.length-r;

    }
