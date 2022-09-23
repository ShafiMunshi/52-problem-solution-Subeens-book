#include <stdio.h>

int main()
{

    int pascel[51][51];
    int n, i, j,s;
    n = 5;

    // this hold the first 2 line of the pascel triangle--
    pascel[1][0] = 1;
    pascel[2][0] = 1;
    pascel[2][1] = 1;

    for (i = 3; i <= n; i++)
    {
        pascel[i][0] = 1; // because all the first index of line is 1...so i stored all the first index of the line to 1...
        for (j = 1; j < i - 1; j++)
        {
            pascel[i][j] = pascel[i - 1][j - 1] + pascel[i - 1][j];
        }
        pascel[i][j] = 1; // because all the last index of the line is 1...so i stored all last index of the lineto 1..
    }




    // printing the pascel triangle----
    for (i = 1; i <= n; i++)
    {

        for ( s=1; s<=n-i; s++)    // printing the space--
        {
            printf(" ");
        }
        for (j = 0; j < i; j++) // printing the triangle--
        {
            printf("%d ", pascel[i][j]);
        }
        printf("\n");
    }

    return 0;
}
