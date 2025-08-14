#include <stdio.h>
#include <math.h>

#define N 10
#define M 10

void preencherMatriz(int matriz[N][M]) {
    int cx = (N - 1) / 2; 
    int cy = (M - 1) / 2;
    int menor = (N < M) ? N : M;
    int r = (int)floor(menor / 2.0); 

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            double d = sqrt(pow(i - cx, 2) + pow(j - cy, 2));
            if (fabs(d - r) <= 1) { 
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

int main() {
    int matriz[N][M];
    preencherMatriz(matriz);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
