#include <stdio.h>
 void main ()
 {
     int a[100],b[100],i,j,m,n;
     printf(" nhap do dai hai day a,b \n");
     scanf("%d%d",&m,&n);
     for (i=0; i<m;i++)
     {
         printf("a[%d]=",i);
         scanf("%d",&a[i]);
     }
      for (i=0; i<n;i++)
     {
         printf("b[%d]=",i);
         scanf("%d",&b[i]);
     }
     printf("day a\n");
     for (i=0; i<m;i++) printf("%d   ",a[i]);
     printf("\n");
     printf("day b\n");
     for (i=0; i<n;i++) printf("%d  ",b[i]);
     printf("\n");
     printf("tron day \n");
     i=0;j=0;
     while (i!=m||j!=n)
     {
         if (a[i]<b[j])
         {
             printf("%d  ",a[i]);
             i++;
         }
         else if (a[i]>b[j])
         {
             printf("%d  ",b[j]);
             j++;
         }
         else
         {
             printf("%d   %d   ",a[i],a[i]);
             i++;j++;
         }

     }

 }
