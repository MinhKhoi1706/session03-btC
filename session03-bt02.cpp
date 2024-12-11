#include <stdio.h>

double celsius, fahrenheit;

int main() {
    
	printf("Nhap nhiet do theo do Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Nhiet do tuong duong theo do Fahrenheit là: %.2lf\n", fahrenheit);

    return 0;
}

