#include <stdio.h>

int main(void) {
    int giorno1, mese1, anno1;
    int giorno2, mese2, anno2;
    printf("Inserisci la prima data (GG MM AAAA): ");
    scanf("%d %d %d", &giorno1, &mese1, &anno1);
    printf("Inserisci la seconda data (GG MM AAAA): ");
    scanf("%d %d %d", &giorno2, &mese2, &anno2);
    if (anno1 > anno2) {
        printf("La data più recente è: %02d/%02d/%04d\n", giorno1, mese1, anno1);
    } else if (anno1 < anno2) {
        printf("La data più recente è: %02d/%02d/%04d\n", giorno2, mese2, anno2);
    } else {
        if (mese1 > mese2) {
            printf("La data più recente è: %02d/%02d/%04d\n", giorno1, mese1, anno1);
        } else if (mese1 < mese2) {
            printf("La data più recente è: %02d/%02d/%04d\n", giorno2, mese2, anno2);
        } else {
            if (giorno1 > giorno2) {
                printf("La data più recente è: %02d/%02d/%04d\n", giorno1, mese1, anno1);
            } else if (giorno1 < giorno2) {
                printf("La data più recente è: %02d/%02d/%04d\n", giorno2, mese2, anno2);
            } else {
                printf("Le due date sono identiche.\n");
            }
        }
    }

    return 0;
}
