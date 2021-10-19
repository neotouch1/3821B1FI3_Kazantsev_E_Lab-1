#include <stdlib.h>
#include <math.h>
#include <stdio.h>


int main(void)
{
    int N, i;  // ���������� ������� � ��������� �����.
    double a, fractional_part, max, min; // ���������� ���������, ������� ����������, ���������� ������� � ������ ������ ���������.
    double num, sum = 0; // ���������� ����� � ���������� �����.

    printf("Input N: "); // ������� �� ����� ����������� ������ �������� ��� N
    scanf("%d", &N); 
    printf("Input min: ");  // ������� �� ����� ����������� ������ �������� ��� "min"
    scanf("%lf", &min);
    printf("Input max: ");  // ������� �� ����� ����������� ������ �������� ��� "max"
    scanf("%lf", &max);

    for (i = 0; i < N; i++)
    {
        a = (double)rand() / RAND_MAX * (max - min) + min; // ���������� ��������� �����.
        fractional_part = modf(a, &num); // �������� ������� �����

        if (i >= 0 && i < 10 && i != (int)(fractional_part * 10)) // ���� ����� ����� �� ������� � ��� ������� ������, �� ��� ������������ � ����� �����.
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
    printf("SUM: %f\n\n", sum); // ����� �������� ����� �� �����.

    return 0;
}