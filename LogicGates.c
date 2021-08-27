#include <stdio.h>
#include "line.h"
int not(int i)
{
    if (i == 0)
        return 1;
    else
        return 0;
}
int and (int i, int j)
{
    return (i && j);
}
int or (int i, int j)
{
    return (i || j);
}
int nand(int i, int j)
{
    return not(and(i, j));
}
int nor(int i, int j)
{
    return not(or (i, j));
}

void main()
{
    int s;
    char ch;
    do
    {
        line();
        printf("\n1. NOT gate\n2. AND gate\n3. OR gate\n4. NAND gate\n5. NOR gate\n");
        line();
        printf("\nWhich gate you want to perform? : ");
        scanf("%d", &s);
        printf("\n");
        line();
        switch (s)
        {
        case 1:
            printf("\n");
            for (int j = 0; j <= 1; j++)
            {
                printf("%d'= %d\n", j, not(j));
            }
            printf("\n");
            break;
        case 2:
            printf("\n");
            for (int i = 0; i <= 1; i++)
            {
                for (int j = 0; j <= 1; j++)
                {
                    printf("%d && %d = %d\n", i, j, and(i, j));
                }
            }
            printf("\n");
            break;
        case 3:
            printf("\n");
            for (int i = 0; i <= 1; i++)
            {
                for (int j = 0; j <= 1; j++)
                {
                    printf("%d || %d = %d\n", i, j, or (i, j));
                }
            }
            printf("\n");
            break;
        case 4:
            printf("\n");
            for (int i = 0; i <= 1; i++)
            {
                for (int j = 0; j <= 1; j++)
                {
                    printf("%d NAND %d = %d\n", i, j, nand(i, j));
                }
            }
            printf("\n");
            break;
        case 5:
            printf("\n");
            for (int i = 0; i <= 1; i++)
            {
                for (int j = 0; j <= 1; j++)
                {
                    printf("%d NOR %d = %d\n", i, j, nor(i, j));
                }
            }
            printf("\n");
            break;
        default:
            printf("\n");
            printf("Invalid entry\n");
            line();
        }
        line();
        printf("Want to continue? : ");
        getchar();
        scanf("%c", &ch);

    } while (ch == 'y' || ch == 'Y');
    printf("\nThanks for using... Have a great day! :)\n");
    line();
}
