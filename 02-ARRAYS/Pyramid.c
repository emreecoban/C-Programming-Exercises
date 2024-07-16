#include <stdio.h>

int main() {
    int i, n;

    printf("kac yildiz: ");
    scanf("%d", &n);

    int toplamYildiz = (n * (n + 1)) / 2; // Toplamda bas�lacak y�ld�z say�s�
    int satir = 1; // �lk sat�rdaki y�ld�z say�s�
    int total = 0; // Toplamda bas�lan y�ld�z say�s�
    int bosluk = n - 1; // �lk sat�rdaki bo�luk say�s�
    int boslukSayaci = bosluk; // Bo�luk sayac�

    for (i = 1; i <= toplamYildiz; i++) {
        // Sat�r ba��nda bo�luk ekle
        if (boslukSayaci > 0) {
            printf(" ");
            boslukSayaci--;
            i--;
        } else {
            // Y�ld�z ekle
            printf("* ");
            total++;
        }

        // E�er mevcut sat�rdaki y�ld�z say�s�na ula��ld�ysa yeni sat�ra ge�
        if (total == satir) {
            printf("\n");
            satir++;
            bosluk--; // Bir sonraki sat�r i�in bo�luk say�s�n� azalt
            boslukSayaci = bosluk; // Bo�luk sayac�n� g�ncelle
            total = 0; // Mevcut sat�rdaki y�ld�z say�s�n� s�f�rla
        }
    }

    return 0;
}
