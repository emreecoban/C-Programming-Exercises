#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sutun,i,j,k,n;

    printf("1. matris icin Satir sayisi: ");
    scanf("%d",&satir);

    printf("1. matris icin Sutun sayisi: ");
    scanf("%d",&sutun);

    int matris [satir][sutun];

    for(i=0;i<satir;i++)
    {
            for(j=0;j<sutun;j++)
            {
                printf("\n [%d][%d]---->",i+1,j+1);
                scanf("%d",&matris[i][j]);
            }
    }
    printf("olusan 1. matris:\n");
    for(k=0;k<satir;k++)
    {
        for(n=0;n<sutun;n++)
        {
            printf("%4d",matris[k][n]);
        }
        printf("\n");
    }
    int satir2,sutun2,a,b,c,d;

    printf("2. matris icin Satir sayisi: ");
    scanf("%d",&satir2);

    printf("2. matris icin Sutun sayisi: ");
    scanf("%d",&sutun2);

    int matris2 [satir2][sutun2];

    for(a=0;a<satir2;a++)
    {
            for(b=0;b<sutun2;b++)
            {
                printf("\n [%d][%d]---->",a+1,b+1);
                scanf("%d",&matris2[a][b]);
            }
    }
    printf("olusan 2. matris:\n");
    for(c=0;c<satir;c++)
    {
        for(d=0;d<sutun;d++)
        {
            printf("%4d",matris2[c][d]);
        }
        printf("\n");
    }















    return 0;
}
