#include <stdio.h>
int main()
{
    char nome[100];
    int d1, d2, m1, m2, a1, a2;

    gets(nome);

    scanf("%d/%d/%d", &d1, &m1, &a1);
    scanf("%d/%d/%d", &d2, &m2, &a2);

    if (d1 == d2 && m1 == m2)
    {
        printf("Feliz aniversario!\n");
    }
    int idade = a1 - a2;
    if (m2 > m1 || m2 == m1 && d2 > d1)
    {
        idade--;
    }

    printf("Voce tem %d anos %s.\n", idade, nome);

    return 0;
}
