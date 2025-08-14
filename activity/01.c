#include <stdio.h>

void verSimetrica(int N, int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                printf("n e simetrica.\n");
                return;
            }
        }
    }
    printf("e simetrica.\n");
}

int main()
{
    int N, M;

    printf("Digite N: ");
    scanf("%d", &N);
    printf("Digite M: ");
    scanf("%d", &M);

    int mat[100][100];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    verSimetrica(N, mat);
    return 0;
}
