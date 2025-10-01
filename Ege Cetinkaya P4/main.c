#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;

    printf("Bir sayi gir: ");
    scanf("%d", &sayi);
    if (sayi > 0) {
        printf("Pozitif\n");
    } else {
        printf("Negatif\n");
    }
    return 0;
}
