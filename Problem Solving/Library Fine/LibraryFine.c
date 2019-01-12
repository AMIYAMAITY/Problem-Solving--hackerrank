// Complete the libraryFine function below.
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int dg,mg,yg;
    dg=d1-d2;
    mg=m1-m2;
    yg=y1-y2;

    if (yg > 0)
      return 10000;
      else{
    if(yg<0 || mg<0)
    return 0;
    else if(mg>0)
    return (mg*500);
    else if(dg>0)
    return (dg*15);
    else
    return 0;
      }

}
