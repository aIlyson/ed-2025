#include <stdio.h>

void capturar(int t, float *x)
{
    for (int i = 0; i < t; i++) {
        printf(" %d: ", i + 1);
        scanf("%f", &x[i]);
    }
}

float media(int t, float *x)
{
    float soma = 0;
    for (int i = 0; i < t; i++)
        soma += x[i];

    return soma / t;
}

float variancia(int t, float *x, float m)
{
    float v = 0;
    for (int i = 0; i < t; i++)
        v += (x[i] - m) * (x[i] - m);

    return v / t;
}

int main()
{
    float valores[5];

    capturar(5, valores);

    float result = media(5, valores);
    printf("média = %.2f\n", result);

    float v = variancia(5, valores, result);
    printf("variância = %.2f\n", v);

    return 0;
}
