#include <stdlib.h>
#include <math.h>
#include <stdio.h>


int main(void)
{
    int N = 0, i, temp;  // Переменные генерации и индекса, временная переменная.
    double a, fractional, max, min; // Переменная генерации, дробная переменная, переменные верхней и нижней границ диапазона.
    double num, sum = 0; // Переменная целой и переменная суммы.
    double j; // Индекс получившийся из дробной части.

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
        fractional = modf(a, &num); // Выделяем дробную часть
        j = (int)(fractional * 10) % 10; // Проверка на совпадение дробной части с индексом исходного числа

        if (j != i)
        {
            sum += a;
        }
    }

    if (i >= 10 && j < 100)
    {
        fractional = modf(a, &num);
        j = (int)(fractional * 100) % 100;
        if (j != i)
        {
            sum += a;
        }
    }

    if (i >= 100 && j < 1000)
    {
        fractional = modf(a, &num);
        j = (int)(fractional * 1000) % 1000;
        if (j != i)
        {
            sum += a;
        }
    }

    if (i >= 1000 && j < 10000)
    {
        fractional = modf(a, &num);
        j = (int)(fractional * 10000) % 10000;
        if (j != i)
        {
            sum += a;
        }
    }

    if (i >= 10000 && j < 100000)
    {
        fractional = modf(a, &num);
        j = (int)(fractional * 100000) % 100000;
        if (j != i)
        {
            sum += a;
        }
    }

    if (i >= 100000 && j < 1000000)
    {
        fractional = modf(a, &num);
        j = (int)(fractional * 1000000) % 1000000;
        if (j != i)
        {
            sum += a;
        }
    }

    printf("SUM: %f\n\n", sum); // Вывод результата на экран.

    return 0;

}
