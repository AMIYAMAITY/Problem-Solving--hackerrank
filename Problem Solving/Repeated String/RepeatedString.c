
int length(char *s)
{
    int c=0;
    while(s[c]!='\0')
    {
        c++;
    }
    return c;
}

// Complete the repeatedString function below.
long repeatedString(char* s, long n) {
  long l = length(s);
  long d = n / l;
  long r = n % l;
  long c = 0,result;
  for (int i = 0; i < l; i++) {
    if (s[i] == 'a')
      c++;
  }
  result = c * d;
  c=0;
  for (int i = 0; i < r; i++) {
    if (s[i] == 'a')
      c++;
    }
    result = result+c;
    return result;
}
