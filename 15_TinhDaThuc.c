#include <stdio.h>
 void main ()
 {
     int a[100],b[100],i,n;
     printf(" nhap n \n");
     scanf("%d",&n);
     for (i=n; i>=0;i--)
     {
         printf("a%d=",i);
         scanf("%d",&a[i]);
     }
        if (a[n]==-1) printf("-X%d",n);
        else if (a[n]<0) printf ("%dX%d",a[n],n);
        else if (a[n]==1) printf ("X%d ",n);
        else if (a[n]!=0) printf("%dX%d",a[n],n);

    for (i=n-1;i>=1;i--)
    {
        if (a[i]==0) continue;
        else if (a[i]==-1) printf("-X%d",i);
        else if (a[i]<0) printf ("%dX%d",a[i],i);
        else if (a[i]==1) printf ("+ X%d ",i);
        else printf("+ %dX%d",a[i],i);
    }
    if (a[0]<0) printf("%d",a[0]);
        else if (a[0]>0) printf("+ %d",a[0]);

 }
