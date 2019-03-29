#include<stdio.h>
  int main()
      {
      int se,n,i;
        scanf("%d %d",&se,&n);
      int a[n];
      for(i=0;i<n;i++)
          {
          scanf("%d",&a[i]);
          if(se==a[i])
              break;
          }
      printf("%d",i);
 return(0);
}
      
