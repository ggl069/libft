#include <stdio.h>

int main() {
    // Definizione dell'indirizzo hardcoded
    // Il cast (char *) dice al programma di trattare l'indirizzo come un puntatore a un singolo byte
    char *puntatore = (char *)0x7fff7d690489;

    // Lettura del valore (deferenziazione)
    char valore = *puntatore;

    // Stampa del carattere
    printf("Il valore della cella è: %c\n", valore);

    return 0;
}
