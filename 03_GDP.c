#include <stdio.h>
void main()
{
    float Gdp2000,tocDo,Gdp;
    int i;
    printf("nhap GDP nam 2000 \n");
    scanf("%f",&Gdp2000);
    printf("toc do tang truong (a.b)\n");
    scanf("%f",&tocDo);
    Gdp=Gdp2000;
    i=2000;
    printf("nam 2000 GDP = %0.2f\n",Gdp2000);
    while  (Gdp < (2*Gdp2000))
    {
        i++;
        Gdp+=(float)Gdp*tocDo;
        printf("nam %d GDP= %0.0f\n",i,Gdp);
    }
}
