// Complete the jumpingOnClouds function below.
    static int jumpingOnClouds(int[] c) {
            int count=0,j=0;
        for(int i=0;i<c.length-1;)
        {
              if(i<c.length-2)
              {
              if(c[i+1]==0 && c[i+2]==0)
                 {
                        count++;
                        i=i+2;
                        continue;
                 }
              }
            
             if(c[i+1]==0)
             {
                         count++;  
                         i=i+1;
                         continue;
             }

            
            if(c[i+1]==1)
            {
                         for( j=i+1;j<c.length;j++)
                            {
                              if(c[j]==0)
                              {
                                 i=j;
                                 count++;
                                 break;
                              }
                            }
                
            }
               
        }
       
        return count;
            
    }
