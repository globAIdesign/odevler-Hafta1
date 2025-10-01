#include <stdio.h>
#include <stdlib.h>

int main()
{
   int hedefsayi;
    int i;
    printf("Hedef sayýyý girin: ");
    scanf("%d", &hedefsayi);
    printf("Sonuclar:\n");

    for (i = 1; i <= hedefsayi; i++) {
        if (i > 50) {
            printf("Sayi 50'den buyuk\n");
            break;
        }
        if (i % 3 == 0) {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
