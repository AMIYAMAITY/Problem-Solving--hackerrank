static  int height(int h[],char ch)
    {
       int k=(int)ch;
       k=k-97;
      return h[k];
    }
    // Complete the designerPdfViewer function below.
    static int designerPdfViewer(int[] h, String word) {
        char ar[]=word.toCharArray();
            int ht=0;
            for(int i=0;i<ar.length;i++)
            {
                if(height(h,ar[i]) > ht)
                    ht=height(h,ar[i]);
               
            }
                
        return ht*ar.length;

    }
