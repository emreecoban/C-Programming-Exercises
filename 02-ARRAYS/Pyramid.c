#include <stdio.h>

int main() {
    int i, n;

    printf("kac yildiz: ");
    scanf("%d", &n);

    int toplamYildiz = (n * (n + 1)) / 2; // Toplamda basýlacak yýldýz sayýsý
    int satir = 1; // Ýlk satýrdaki yýldýz sayýsý
    int total = 0; // Toplamda basýlan yýldýz sayýsý
    int bosluk = n - 1; // Ýlk satýrdaki boþluk sayýsý
    int boslukSayaci = bosluk; // Boþluk sayacý

    for (i = 1; i <= toplamYildiz; i++) {
        // Satýr baþýnda boþluk ekle
        if (boslukSayaci > 0) {
            printf(" ");
            boslukSayaci--;
            i--;
        } else {
            // Yýldýz ekle
            printf("* ");
            total++;
        }

        // Eðer mevcut satýrdaki yýldýz sayýsýna ulaþýldýysa yeni satýra geç
        if (total == satir) {
            printf("\n");
            satir++;
            bosluk--; // Bir sonraki satýr için boþluk sayýsýný azalt
            boslukSayaci = bosluk; // Boþluk sayacýný güncelle
            total = 0; // Mevcut satýrdaki yýldýz sayýsýný sýfýrla
        }
    }

    return 0;
}
