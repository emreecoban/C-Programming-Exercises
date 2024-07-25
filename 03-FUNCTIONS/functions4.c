#include <stdio.h>
#include <stdlib.h>


float dortislem(sayi1,sayi2,islem)

{
    if (islem=='+')
    {
        return sayi1+sayi2;
    }
    else if (islem=='-')
    {
        return sayi1-sayi2;
    }
    else if (islem=='*')
    {
        return sayi1*sayi2;
    }
    else if (islem=='/')
    {
        return sayi1/sayi2;
    }
    else
    {

        printf("yanlis operator girdiniz");
    }

}

int main()
{
    float sayi1,sayi2;
    char islem;


    printf("Hangi islemi yaptirmak istersiniz ( + - * / )\n");
    scanf("%c",&islem);

    printf("Lutfen 2 adet sayi giriniz:\n");
    scanf("%f %f",&sayi1,&sayi2);


    printf("Islemin sonucu %f",dortislem(sayi1,sayi2,islem));




    return 0;
}
