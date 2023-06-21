#include <stdio.h>

int main() {
    int i;
    float f;
    char c;
    double d;

    // Input for integer
    printf("Enter an integer: ");
    scanf("%d", &i);

    // Input for float
    printf("Enter a float: ");
    scanf("%f", &f);

    // Input for character
    printf("Enter a character: ");
    scanf(" %c", &c);  // Notice the space before %c to consume any preceding newline character

    // Input for double
    printf("Enter a double: ");
    scanf("%lf", &d);

    // Output the values entered
    printf("Integer: %d\n", i);
    printf("Float: %f\n", f);
    printf("Character: %c\n", c);
    printf("Double: %lf\n", d);

    return 0;
}
