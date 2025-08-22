#include <stdio.h>
#include <math.h>

float harmonica(int n, float *v) {
    float soma = 0.0;
    float *p = v;
    for (int i = 0; i < n; i++, p++) {
        soma += 1.0 / (*p);
    }
    return n / soma;
}

float geometrica(int n, float *v) {
    float produto = 1.0;
    float *p = v;
    for (int i = 0; i < n; i++, p++) {
        produto *= (*p);
    }
    return pow(produto, 1.0 / n);
}

float ponderada(int n, float *v, float *w) {
    float pesos = 0, valor = 0, p;

    for(int i = 0; i < n; i++){
        valor += *(v + i) * *(w + i);
        pesos += *(w + i);
    }
    return valor / pesos;
}

int main(){
    float vet[5], result = 0;
    for(int i=0; i<5; i++){
        printf(" %d: ", i + 1);
        scanf("%f", &vet[i]);
    }

    result = harmonica(5, vet);
    printf("media harmonica e: %.2f\n", result);

    result = geometrica(5, vet);
    printf("media geometrica e: %.2f\n", result);

    result = ponderada(5, vet, vet);
    printf("media ponderada e: %.2f\n", result);

    return 0;
}