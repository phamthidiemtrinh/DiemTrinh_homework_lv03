#include <stdio.h>

void main()
{
    int gt,n,dau,lan;
    float x,sin,eps,tam,t;
    printf("nhap x ,Eps \n");
    scanf("%f%f",&x,&eps);
    gt=1;
    n=1;
    dau=1;
    tam=x;
    lan=0;
    t=0;
    while (t<=eps)
    {  if (lan%2==0) dau=1;
         else dau=-1;
         t=x/gt;
        sin+=(dau*t);
        x=x*tam*tam;
        n+=2;
        gt=gt*(n-1)*n;
        lan++;
        printf("----%f",sin);
    }
    printf("sin(%0.2f)=%0.2f",tam,sin);
}
