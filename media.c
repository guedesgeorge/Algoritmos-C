#include <stdio.h>

int main()
{
    int N1, N2, N3; 
    double media;

    printf("Digite a primeira nota do aluno: ");
    scanf("%d", &N1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%d", &N2);

    printf("Digite a terceira nota: ");
    scanf("%d", &N3);

    media = (N1 + N2 + N3) / 3;

    printf("A media aritimetica do aluno eh %.2f\n", media);

    return 0;
}
