/*
     * Complete the gradingStudents function below.
     */
    static int[] gradingStudents(int[] grades) 
    {
        int arr[]=new int[grades.length] ;
        
       for(int i=0;i<grades.length; i++)
       {
           if(grades[i]>=38)
           {
               int m=grades[i];
               while(m%5!=0)
               m +=1;
               m=m-grades[i];
               if(m<3)
                   grades[i] +=m;   
           }
       }
    return grades;
    }
