#include <stdio.h>
void main()
{
    int a[100],i,soAm,soDuong,n;
    float tbAm,tbDuong;
    printf("nhap so phan tu \n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf ("%d",&a[i]);
    }
    tbAm=0;tbDuong=0;
    soAm=0;
    soDuong=0;
    for (i=0;i<n;i++)
        if (a[i]>0)
        {
            soDuong++;
            tbDuong+=a[i];
        }
        else if (a[i]<0)
        {
            soAm++;
            tbAm+=a[i];

        }
    printf("Trung binh cong cac so am = %f\n",(float)tbAm/soAm);
    printf("Trung binh cong cac so duong = %f\n",(float)tbDuong/soDuong);
    printf("Trung binh cong cua ca day so = %f",(float)(tbAm+tbDuong)/n);
    }

