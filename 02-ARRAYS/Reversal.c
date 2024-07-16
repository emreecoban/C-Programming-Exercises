#include <stdio.h>

int main() {
    int sayi, tersi = 0, basamak, i;
    int basamaksayisi = 0;

    printf("Sayinizi giriniz: ");
    scanf("%d", &sayi);

    printf("Sayiniz: %d\n", sayi);

    // Giriþ yapýlan sayýnýn basamak sayýsýný hesaplýyoruz
    for (int i = sayi; i > 0; i /= 10) {
        basamaksayisi++;

    }

    // Bir for döngüsü kullanarak sayýyý ters çeviriyoruz
    for (i = 0; i < basamaksayisi; i++) {

        basamak = sayi % 10;
        tersi = tersi * 10 + basamak; // Döngü sonuna kadar devam ediyor iþlem.
        sayi /= 10;
    }

    printf("Ters Sayiniz: %d\n", tersi);

    return 0;
}

