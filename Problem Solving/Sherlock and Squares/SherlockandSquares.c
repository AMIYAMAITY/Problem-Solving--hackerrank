// Complete the squares function below.
int squares(int a, int b) {
    int i,ans=0;
  for (i = 1;; i++) {
    if (i * i > b)
      break;
    if (i * i <= b && i * i >= a)
      ans++;
  }
  return ans;
     }
