#include <stdio.h>

double r, circumference, area;
const double PI = 3.14;

int main() {
    
    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &r);
    circumference = 2 * PI * r;
    area = PI * r * r;
    printf("Chu vi hinh tron: %.2lf\n", circumference);
    printf("Dien tich hinh tron: %.2lf\n", area);

    return 0;
}

