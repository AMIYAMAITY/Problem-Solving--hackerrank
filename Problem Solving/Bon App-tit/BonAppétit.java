static int[] numberWithSpace(String str)
    {
        
      String array1[]= str.split(" ");
        int[] intarr=new int[array1.length];
 
        for(int i=0;i<array1.length;i++)
        intarr[i]=Integer.parseInt(array1[i]);
        return intarr;
    }
