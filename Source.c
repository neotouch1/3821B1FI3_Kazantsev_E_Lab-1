#include <stdlib.h>
#include <math.h>
#include <stdio.h>


int main(void)
{
    int N = 0, i, temp;  // Переменные генерации и индекса, временная переменная.
    double a, fractional_part, max, min; // Переменная генерации, дробная переменная, переменные верхней и нижней границ диапазона.
    double num, sum = 0; // Переменная целой и переменная суммы.
while (N <= 0)
{
    printf("Input N: "); // Выводит на экран предложение ввести значение для N
    scanf("%d", &N); 
    printf("Input min: ");  // Выводит на экран предложение ввести значение для "min"
    scanf("%lf", &min);
    printf("Input max: ");  // Выводит на экран предложение ввести значение для "max"
    scanf("%lf", &max);
}
    if (min > max) // В слуае, если вводимое значение "min" окажется больше чем "max", делается перестановка.
    {
        temp = min;
        min = max;
        max = temp;
    }

    for (i = 0; i < N; i++)
    {
        a = (double)rand() / RAND_MAX * (max - min) + min; // Происходит генерация чисел.
        fractional_part = modf(a, &num); // Выделяем дробную часть


        if (i >= 0 && i < 10 && i != (int)(fractional_part * 10)) // Если номер числа не совпадёт с его дробной частью, то оно складывается в общую сумму.
            sum += a; 
        else if (i >= 10 && i < 100 && i != (int)(fractional_part * 100))
            sum += a;
        else if (i >= 100 && i < 1000 && i != (int)(fractional_part * 1000))
            sum += a;
        else if (i >= 1000 && i < 10000 && i != (int)(fractional_part * 10000))
            sum += a;
        else if (i >= 10000 && i < 100000 && i != (int)(fractional_part * 100000))
            sum += a;
    }
    printf("SUM: %f\n\n", sum); // Вывод результата на экран.

    return 0;
    
}
