#include <stdio.h>


struct Point {
    int x;
    int y;
};


void swapPoints(struct Point *p1, struct Point *p2) {
    int tempX, tempY;

    
    tempX = p1->x;
    p1->x = p2->x;
    p2->x = tempX;

   
    tempY = p1->y;
    p1->y = p2->y;
    p2->y = tempY;
}

int main() {
    struct Point point1, point2;

   
    printf("Enter the coordinates for point 1 (x y): ");
    scanf("%d %d", &point1.x, &point1.y);

    
    printf("Enter the coordinates for point 2 (x y): ");
    scanf("%d %d", &point2.x, &point2.y);

   
    printf("\nOriginal Points:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

  
    swapPoints(&point1, &point2);

    
    printf("\nSwapped Points:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
