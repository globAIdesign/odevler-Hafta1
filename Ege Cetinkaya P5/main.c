#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ogrenciSayisi = 5;
    int notSayisi = 4;
    int ogrenciNo;
    int notNo;
    int not;
    int toplamNot;
    float ortalama;
    printf("Hesaplama Uyg\n");

    for (ogrenciNo = 1; ogrenciNo <= ogrenciSayisi; ogrenciNo++) {
        toplamNot = 0;
        printf("\n--- %d. �grenci Notu ---\n", ogrenciNo);
        for (notNo = 1; notNo <= notSayisi; notNo++) {
            printf("%d. notu girin (0-100): ");
            scanf("%d", &not);
            if (not < 0 || not > 100) {
                printf("Olmuyo d�zg�n gir.\n");
                notNo--;
                continue;
            }

            toplamNot = toplamNot + not;
        }
        ortalama = (float)toplamNot / 4.0;

        printf("%d. ��rencinin Not Ortalamas�: %.2f\n", ogrenciNo, ortalama);

        if (ortalama < 50) {
            printf("Durum: KALDI\n");
        } else {
            printf("Durum: GE�T�\n");
        }
    }
    printf("\nProgram tamamland�.\n");
    return 0;
}
