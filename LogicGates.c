#include <stdio.h>
#include "line.h"
int not(int i);
int and (int i, int j);
int or (int i, int j);
int nand(int i, int j);
int nor(int i, int j);

void main()
{
    int s, s1;
    int a, b;
    char ch;
    printf("\n\nDo you want to enter inputs by your own on want truth tables for required logic gates?\n\n1. Inputs\n2. Only truth table.\n\nEnter your choice : ");
    scanf("%d", &s1);
    switch (s1)
    {
    case 1:
            line();
            printf("\n");
        printf("Enter first input A = ");
        scanf("%d", &a);
        printf("Enter first input B = ");
        scanf("%d", &b);
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
                printf("%d' = %d\n", a, not(a));
                printf("%d' = %d\n", b, not(b));
                break;
            case 2:
                printf("%d && %d = %d\n", a, b, and(a, b));
                break;
            case 3:
                printf("%d || %d = %d\n", a, b, or (a, b));
                break;
            case 4:
                printf("%d NAND %d = %d\n", a, b, nand(a, b));
                break;
            case 5:
                printf("%d NOR %d = %d\n", a, b, nor(a, b));
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
        break;
    case 2:
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
        break;
    default:
        break;
    }

    printf("\nThanks for using... Have a great day! :)\n");
    line();
}
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
