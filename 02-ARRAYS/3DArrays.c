#include <stdio.h>
#include <stdlib.h>

int main()
{
    

    int dizi[2][3][2];
    int i,j,k;

    printf("Lutfen 12 adet deger giriniz\n");

    for (i=0; i<2; i++)
    {
        for( j=0; j<3; j++)
        {
            for (k=0; k<2; k++)
            {
                scanf("%d", &dizi[i][j][k]);
            }
        }
    }

    printf("Girdiginiz Degerler\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<2; k++)
            {
               printf("dizi[%d][%d][%d] = %d\n", i+1, j+1, k+1, dizi[i][j][k]);
            }
        }
    }

    return 0;
}
