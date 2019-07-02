#include<stdio.h>
  int main()
      {
     int test,i,n,j,k,t,k1,t1,m;
      int c=0;
    scanf("%d",&test);
  for(i=0;i<test;i++)
      {
      scanf("%d",&m);
      scanf("%d",&n);
      int a[n];
      for(j=0;j<n;j++)
          {
         scanf("%d",&a[j]);
          }
      for(k=0;k<n;k++)
          {
          for(t=k+1;t<n;t++)
              {
            if((a[k]+a[t])==m)
                {
                c++;
                break;
                }
              }
          if(c==1)
              break;
         }
      k1=k+1;
      t1=t+1;
      printf("%d %d\n",k1,t1);
     c=0;
     }
return(0);
}
                
