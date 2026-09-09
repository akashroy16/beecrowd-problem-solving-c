#include <stdio.h>

int main() {
    int fuelCode, alcohol = 0, gasoline = 0, diesel = 0;
    
    while (1) {
        scanf("%d", &fuelCode);
        
        if (fuelCode == 1) {
            alcohol++;
        } else if (fuelCode == 2) {
            gasoline++;
        } else if (fuelCode == 3) {
            diesel++;
        } else if (fuelCode == 4) {
            break;
        }
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);
    
    return 0;
}
