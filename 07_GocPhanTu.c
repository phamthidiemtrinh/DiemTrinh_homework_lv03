#include <stdio.h>
void main()
{
    int x[100],y[100],z[100],i,p1,p2,p3,p4,n;
    p1=0;p2=0;p3=0;p4=0;
    printf(" nhap so diem = \n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf ("Điem thu %d \n",i);
        scanf("%d%d",&x[i],&y[i]);
    }
    for (i=0;i<n;i++)
     {
          if (x[i]>0)
          {
              if (y[i]>0)
                {
                    p1++;
                    z[i]=1;
                }
              else if (y[i]<0)
                {
                    p4++;
                    z[i]=4;
                }
          }
          else if (x[i]<0)
          {
              if (y[i]>0)
              {
                  p2++;
                  z[i]=2;
              }
              else if (y[i]<0)
              {
                  p3++;
                  z[i]=3;
              }
          }
     }
    printf("co %d thuoc goc phan tu thu nhat\n",p1);
     for (i=0;i<n;i++)
        if (z[i]==1) printf("(%d,%d); ",x[i],y[i]);
     printf("\n");
      printf("co %d thuoc goc phan tu thu hai\n",p2);
     for (i=0;i<n;i++)
        if (z[i]==2) printf("(%d,%d); ",x[i],y[i]);
     printf("\n");
      printf("co %d thuoc goc phan tu thu ba\n",p3);
     for (i=0;i<n;i++)
        if (z[i]==3) printf("(%d,%d); ",x[i],y[i]);
     printf("\n");
      printf("co %d thuoc goc phan tu thu tu\n",p4);
     for (i=0;i<n;i++)
        if (z[i]==4) printf("(%d,%d); ",x[i],y[i]);
     printf("\n");
}
