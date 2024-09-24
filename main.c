#include <stdio.h>


int main() {
    float prezzo_biglietto, provvigione, prezzo_finale;

    printf("Inserisci il prezzo del biglietto: ");
    scanf("%f", &prezzo_biglietto);

    provvigione = prezzo_biglietto * 0.15;
    if (provvigione < 5) {
        provvigione = 5;
    }

    prezzo_finale = prezzo_biglietto + provvigione;


    printf("Valore della provvigione: %.2f€\n", provvigione);
    printf("Prezzo finale del biglietto: %.2f€\n", prezzo_finale);

    return 0;
}
