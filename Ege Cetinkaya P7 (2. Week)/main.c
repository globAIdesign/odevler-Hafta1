#include <stdio.h>
#include <stdlib.h>

int main()
{
    char veri;
    int i = 0;
    int b = 0;

    printf("Bir Karakter Girin: ");
    scanf(" %c", &veri);

    while(1){

        for(i = 0; i < 30; i++){
            for(b = 0; b < i; b++){
                printf(" ");
            }
            printf("%c\n", veri);
            usleep(10000);  // 10ms
        }
        for(i = 28; i >= 0; i--){
            for(b = 0; b < i; b++){
                printf(" ");
            }
            printf("%c\n", veri);
            usleep(10000);  // 10ms
        }

    }

    return 0;
}
