#include <stdio.h>

int main() {
    int sayi, tersi = 0, basamak, i;
    int basamaksayisi = 0;

    printf("Sayinizi giriniz: ");
    scanf("%d", &sayi);

    printf("Sayiniz: %d\n", sayi);

    // Giri� yap�lan say�n�n basamak say�s�n� hesapl�yoruz
    for (int i = sayi; i > 0; i /= 10) {
        basamaksayisi++;

    }

    // Bir for d�ng�s� kullanarak say�y� ters �eviriyoruz
    for (i = 0; i < basamaksayisi; i++) {

        basamak = sayi % 10;
        tersi = tersi * 10 + basamak; // D�ng� sonuna kadar devam ediyor i�lem.
        sayi /= 10;
    }

    printf("Ters Sayiniz: %d\n", tersi);

    return 0;
}

