#include<stdio.h>
void main ()
{
    int n,i,so;
    int a[16];
    printf("Nhap so n\n");
    scanf("%d",&n);
    // co so 2
    printf("co so 2: \n");
    so=n; i=0;
    while (so!=0)
    {
        a[i]=(so%2);
        so=(int)(so-a[i])/2;
        i++;

    }
    i--;
    do
    {printf("%d",a[i],i);
    i--;
    }
    while (i!=-1);
    printf("\n");
    // co so 8
    printf("co so 8: \n");
    so=n; i=0;
    while (so!=0)
    {
        a[i]=(so%8);
        so=(int)(so-a[i])/8;
        i++;

    }
    i--;
    do
    {printf("%d",a[i],i);
    i--;
    }
    while (i!=-1);
    printf("\n");
    // co so 16
    printf("co so 16: \n");
    so=n; i=0;
    while (so!=0)
    {
        a[i]=(so%16);
        so=(int)(so-a[i])/16;
        i++;

    }
    i--;
    do
    {if (a[i]==10) printf("A");
        else if (a[i]==11) printf("B");
            else if (a[i]==12) printf ("C");
                else if (a[i]==13) printf ("D");
                    else if (a[i]==14) printf("E");
                        else if (a[i]==15) printf ("F");
                            else printf("%d",a[i],i);
    i--;
    }
    while (i!=-1);
    printf("\n");
}
