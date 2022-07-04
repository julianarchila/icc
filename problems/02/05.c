#include <stdio.h>
int main() {
    float x1, y1, x2, y2;

    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);

    // print values if they are the same point
    if (x1 == x2 && y1 == y2) {
        printf("Punto (%.2f %.2f)\n", x1, y1);
        return 0;
    }

    // if the line is vertical

    if (x1 == x2) {
        printf("Linea Vertical x=%.2f\n", x1);
        return 0;

    } 

    if (y1 == y2) {
        printf("Linea Horizontal y=%.2f\n", y1);
        return 0;
    } 

    float m = (y2 - y1) / (x2 - x1);

    float b = y1 - m * x1;

    if (y1 < y2) {
        printf("Recta Creciente y=%.2fx+%.2f\n", m, b); 
        return 0;
    } else {
        printf("Recta Decreciente y=%.2fx+%.2f\n", m, b);
        return 0;
    }


}