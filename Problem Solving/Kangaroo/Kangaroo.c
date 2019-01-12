char* kangaroo(int x1, int v1, int x2, int v2) {
    char* Ans;
    if( (v1>v2 && x1<x2) || (v1<v2 &&x1>x2) )
    {
       for(unsigned int i=0; i<10000; i++)
       {
          x1=x1+v1;
          x2=x2+v2;
          if(x1==x2)
          {
             Ans="YES";
             return Ans;
          }

       }
       Ans="NO";
       return Ans;
    }
    else
    {
       Ans="NO";
       return Ans;
    }
   

}
