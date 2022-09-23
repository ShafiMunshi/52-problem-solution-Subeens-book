#include <stdio.h>
#include <math.h>

int main()
{

    int T, i, Xc, Yc, x, y, r;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d", &Xc, &Yc);
        scanf("%d", &r);
        scanf("%d %d", &x, &y);

        int d = sqrt(pow(x - Xc, 2) + pow(y - Yc, 2));
        if (d <= r)
        {
            printf("The point is inside the circle\n");
        }
        else
        {
            printf("The point is not inside the circle\n");
        }
    }

    return 0;
}
