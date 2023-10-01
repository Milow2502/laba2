#include <iostream>
#include <cmath>
#include <climits>
#include <cfloat> //float.h deprecated in C++11
#include <windows.h>

void lab2() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);//utf-8
    puts("\n\tзавдання 1 ");
    puts("Реалізувати деякі арифметичні операції\n"
         "з данними різних типів");
    int c1 = 'C' + 25;
    char c2 = 'C' + 25;
    printf(" 'C' + 25 = %d\n", c1);
    printf(" 'С' + 25 = %c\n", c2);
    printf("2006 + (25 > 8) = %d\n", 2006 + (22 > 8));
    printf("2006 / (25 > 8) = %d\n", 2006 / (22 > 8));
    printf("2006 %% (25 > 8) = %d\n", 2006 % (22 > 8));
    printf("2006.0 / (25 > 8) = %f\n", 2006.0 / (22 > 8));
    printf("2006 << 2 = %d\n", 2006 << 1);
    printf("2006 >> 2 = %d\n", 2006 << 1);
}

void task2() {
    puts("\n\t task 2");
    puts("розрахунки за формулами");//Оголошеня змінних
    double a, u, z, y, x;
    puts("Введіть а - номер списку, u - варіант, \n"
         "z - день народження, y - місяць народження,\n"
         "x - місяць народження / 10");
    std::cin >> a >> u >> z >> y >> x;
    printf("a = %f, u = %f , z = %f , y = %f, x = %f", a, u, z, y, x);

    double example1 = 2 * sin(x) + pow(cos(x / 3), 2);
    printf("\n\t example1 = %f", example1);
    double example2 = log(x + (a / (0.5 * x + 1.8)));
    printf("\n\t example2 = %f", example2);
    double example3 = sqrt(7 * pow(y, 2) * z + fabs(pow(z, 3)));
    printf("\n\t example3 = %f", example3);
    double example41 = log(2 * x - pow(u, 3)) / log(u);
    double example4 = cbrt(u + tan(u * pow(x, 2)) / example41);
    printf("\n\t example 4 = %f", example4);
}

void task3() {
    char ch1 = 127;
    printf("\n\t char = %llu", sizeof(ch1));
    short short1 = 32767;
    printf("\n\t short = %llu", sizeof(short1));
    int int1 = INT_MAX;
    printf("\n\t int = %llu", sizeof(int1));
    long long int longint1 = LONG_LONG_MAX;
    printf("\n\t long long int = %llu", sizeof(longint1));
    float float1 = FLT_MAX;
    printf("\n\t float = %llu", sizeof(float1));
    double double1 = DBL_MAX;
    printf("\n\t double %llu", sizeof(double1));
    long double longdouble = std::numeric_limits<long double>::max();
    printf("\n\t long double = %llu", sizeof(longdouble));
}

int main() {
    task3();
    lab2();
    task2();
    return 0;
}




