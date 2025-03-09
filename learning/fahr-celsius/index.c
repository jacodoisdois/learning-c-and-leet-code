#include <stdio.h>

int convertTemp(int scale, int temp)
{
    if (scale == 1)
    {
        return (temp * 1.8) + 32;
    }
    else
    {
        return (temp - 32) * 32;
    }
}

int main()
{

    int temp;
    int scale;
    int result;

    printf("Welcome to Fahr-Celsius program!");
    printf("This program can convert fahrenheit to celsius and vice-versa!");
    printf("First, choose the target scale of temperature:\n1 - Fahrenheit;\n2 - Celsius;\n");
    scanf("%d", &scale);

    char *currentScaleString = scale == 1 ? "Celsius" : "Fahrenheit";
    char *targetScaleString = scale == 0 ? "Celsius" : "Fahrenheit";

    printf("Now tell me the current temperature in %s that you want to transform into %s:\n", currentScaleString, targetScaleString);
    scanf("%d", &temp);

    result = convertTemp(scale, temp);

    printf("The result is ~= %d %s", result, targetScaleString);

    return 0;
}