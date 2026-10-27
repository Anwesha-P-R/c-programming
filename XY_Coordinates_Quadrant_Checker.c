#include <stdio.h>
int main() {
    int x, y;
    printf("Enter X coordinate: ");
    scanf("%d", &x);
    printf("Enter Y coordinate: ");
    scanf("%d", &y);
    if (x > 0 && y > 0)
        printf("Point (%d, %d) lies in Quadrant I\n", x, y);
    else if (x < 0 && y > 0)
        printf("Point (%d, %d) lies in Quadrant II\n", x, y);
    else if (x < 0 && y < 0)
        printf("Point (%d, %d) lies in Quadrant III\n", x, y);
    else if (x > 0 && y < 0)
        printf("Point (%d, %d) lies in Quadrant IV\n", x, y);
    else if (x == 0 && y == 0)
        printf("Point (%d, %d) is at the Origin\n", x, y);
    else if (x == 0)
        printf("Point (%d, %d) lies on the Y-axis\n", x, y);
    else if (y == 0)
        printf("Point (%d, %d) lies on the X-axis\n", x, y);

    return 0;
}
