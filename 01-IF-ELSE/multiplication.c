#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayim;

    printf("Carpim Tabolosunu gormek istediginiz sayiyi giriniz:\n");
    scanf("%d",&sayim);


    int i=0;
    while (i<=10){
            if(i!=0)
        printf("%d\n",i*sayim);
        i++;


    }

    return 0;
}
