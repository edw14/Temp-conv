/* Pick a number between 1 to 50. */
#include <stdio.h>

int main() {
    
    int celsius;
    float fahrenheit;
    scanf("%d", &celsius);
    printf("Celsius    Fahrenheit\n");

    while (celsius <= 50)
    {
        fahrenheit = 1.8 *(float)celsius + 32.0;
        printf("%5d %10.3f\n", celsius, fahrenheit);
        ++celsius;
    }
    printf("End of conversion\n");
    return 0;
}

