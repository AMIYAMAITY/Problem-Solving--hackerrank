int concat(int x, int y){
return 10*x + y;
}

char* timeConversion(char* s) {
  
    int s0=(int)s[0],s1=(int)s[1],r,rd=0,rr=0,i;
    static char result[8];
    s0 -=48;
    s1 -=48;
    r=concat(s0,s1);
    
    if(s[8]=='P')
    if(r<12) 
    r +=12;
   
    if(s[8]=='A' && r==12)
    r=0;
    
    rd=r/10;
    rr=r%10;
    rd +=48;
    rr +=48;
    result[0]=(char)rd;
    result[1]=(char)rr;
	for(i=2;i<8;i++)
	result[i]=s[i];

   return result;
}
