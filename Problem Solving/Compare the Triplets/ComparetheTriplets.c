int* solve(int a_count, int* a, int b_count, int* b, int* result_count) {
    int i,c=2,ac=0,bc=0;
   static int array[100];
    for(i=0;i<a_count;i++)
    {
      if(a[i]>b[i])
          ac++;

        
        if(a[i]<b[i])
        bc++;

    }
    *result_count=c;
    array[0]=ac;
    array[1]=bc;
    
return array;
}
