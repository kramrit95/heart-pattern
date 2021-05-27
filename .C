#include <stdio.h>
int main()
{
    int rows, i, j, space;
    printf("Enter the no of the rows you want to print ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (space = rows - i; space >= 1; space--)
        {
            printf(" ");
            /* code */
        }
        for (j = 1; j <= i ; j++)
        {
            printf(" 💛");
            /* code */
        }
        printf("\n");
        /* code */
    }
    for (i = rows - 1; i >= 1; i--)
    {
        for (space = rows - i; space > 1; space--)
        {
            printf(" ");
            /* code */
        }
        for (j = 1; j <= i ; j++)
        {
            printf(" 💛");
            /* code */
        }
        printf("\n");
        /* code */

        /* code */
    }

    /* code */
    return 0;
}
