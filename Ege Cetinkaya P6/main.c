#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;
    int sayi2;
    int sayi3;
    int x;

    printf("L�tfen �� sayi gir:\n");
    printf("Birinci say�: ");
    scanf("%d", &sayi1);
    printf("�kinci say�: ");
    scanf("%d", &sayi2);
    printf("���nc� say�: ");
    scanf("%d", &sayi3);
    printf("Girilen say�lar: %d, %d, %d\n", sayi1, sayi2, sayi3);
    if (sayi1 > sayi2) {
        x = sayi1;
        sayi1 = sayi2;
        sayi2 = x;
    }
    if (sayi1 > sayi3) {
        x = sayi1;
        sayi1 = sayi3;
        sayi3 = x;
    }
    if (sayi2 > sayi3) {
        x = sayi2;
        sayi2 = sayi3;
        sayi3 = x;
    }
    printf("S�ralanm�� say�lar: %d, %d, %d\n", sayi1, sayi2, sayi3);
    return 0;
}
