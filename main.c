#include <stdio.h>

int main() {

  float costo;
  char condizione;

    printf("inserire prezzo biglietto:\n");
    scanf("%f", &costo);
    getchar();
    printf("inserire la condizione P = pensionati, S = studenti, D = disoccupati:\n");
    scanf("%c", &condizione);

    if(condizione == 'P') {
        costo -= costo * 0.1;
    }
    else if(condizione == 'S') {
        costo -= costo * 0.15;
    }
    else if(condizione == 'D') {
        costo -= costo * 0.25;
    }
    else {
        printf("inserisci una condizione valida.");
    }

    printf("il prezzo del biglietto scontato e' %.2f",costo);

    return 0;
}
