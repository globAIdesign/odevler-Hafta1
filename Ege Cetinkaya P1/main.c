#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;
    int sayi2;
    int toplam;
    int fark;
    int carpim;
    float bolum;
    printf("Say� girin: ");
    scanf("%d", &sayi1);
    printf("�kinci tamsay�y� girin: ");
    scanf("%d", &sayi2);
    toplam = sayi1 + sayi2;
    fark = sayi1 - sayi2;
    carpim = sayi1 * sayi2;
    bolum = sayi1 / sayi2;


    // Sonu�lar� ekrana yazd�r�yoruz:
    printf("Sayilarin Toplami: %d\n", toplam);
    printf("Sayilarin Farki: %d\n", fark);
    printf("Sayilarin Capimi: %d\n", carpim);
    printf("Sayilarin Bolumu: %.2f\n", bolum);

    return 0;
}
