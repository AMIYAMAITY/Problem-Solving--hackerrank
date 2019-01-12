// Complete the angryProfessor function below.
    static String angryProfessor(int k, int[] a) {
        int cn=0,cp=0;
        for(int i=0;i<a.length;i++)
        {
            if(a[i] <= 0)
                cn++;
            if(a[i] > 0)
                cp++;
        }
        
        if(cn >= k)
        return "NO";
        else
        return "YES";

    }
