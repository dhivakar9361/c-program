#include <stdio.h>

typedef union {
    double radius;
    struct {
        double length;
        double width;
    } rectangle;
} Shape;

int main() {
    char shape_type;
    Shape shape;

    printf("Enter the shape type (c for circle, r for rectangle): ");
    scanf("%c", &shape_type);

    if (shape_type == 'c') {
        printf("Enter the circle's radius: ");
        scanf("%lf", &shape.radius);

        double area = 3.14159 * shape.radius * shape.radius;
        printf("The circle's area is %.2lf\n", area);
    } else if (shape_type == 'r') {
        printf("Enter the rectangle's length and width: ");
        scanf("%lf %lf", &shape.rectangle.length, &shape.rectangle.width);

        double area = shape.rectangle.length * shape.rectangle.width;
        printf("The rectangle's area is %.2lf\n", area);
    } else {
        printf("Invalid shape type\n");
    }

    return 0;
}

