#include <stdio.h>

void inverter(int *vet, int t){
    for (int i = 0; i < t / 2; i++) {
        int temp = vet[i];
        vet[i] = vet[t - i - 1];
        vet[t - i - 1] = temp;
    }
}

int main()
{
    int vet[5];

    for (int i = 0; i < 5; i++)
    {
        printf(" %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("vetor original: ");
    for(int i=0; i<5; i++)
        printf("%d ", vet[i]);
        
    inverter(vet, 5);

    printf("\nvetor invertido: ");
    for(int i=0; i<5; i++)
        printf("%d ", vet[i]);

    return 0;
}
