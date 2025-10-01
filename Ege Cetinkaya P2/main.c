#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    printf("Bir harf girin: ");
    scanf(" %c", &harf);
    if (harf == 'a' || harf == 'e' || harf == 'i' || harf == 'ý' || harf == 'ö' || harf == 'o' || harf == 'ü' || harf == 'u') {
        printf("Sesli harftir\n");
    } else {
        printf("Sessiz harftir\n");
    }

    return 0;
}
