#include <stdio.h>
int main() {
    int i;
    int num1;
    int num2;
    int tot=0;
    printf("Inserire il primo numero: ");
    scanf("%d", &num1);
    printf("Inserire il secondo numero: ");
    scanf("%d", &num2);
    for(i=1; i<=num2; i++) {
        tot+= num1;
    }
    printf("Il risultato con solo le operazioni di addizione e': %d * %d = %d", num1, num2, tot);
}