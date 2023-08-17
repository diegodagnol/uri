#include <stdio.h>
 
int main()
{
    char level1[20], level2[20], level3[20];

    scanf("%S %s %s", level1, level2, level3);

    if (level1[0] == 'v')
    {
        if (level2[0] == 'a')
        {
            if (level3[0] == 'c')
            {
                printf("aguia\n");
            }
            else if (level3[0] == 'o')
            {
                printf("pomba\n");
            }
        }
        else if (level2[0] == 'm')
        {
            if (level3[0] == 'o')
            {
                printf("homem\n");
            }
            else if (level3[0] == 'h')
            {
                printf("vaca\n");
            }
        }
    }
    else if (level1[0] == 'i')
    {
        if (level2[0] == 'i')
        {
            if (level3[2] == 'm')
            {
                printf("pulga\n");
            }
            else if (level3[0] == 'h')
            {
                printf("lagarta\n");
            }
        }
        else if (level2[0] == 'a')
        {
            if (level3[0] == 'h')
            {
                printf("sanguessuga\n");
            }
            else if (level3[0] == 'o')
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
