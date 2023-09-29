#include <iostream>
#include <cmath>
#include <climits>
#include <cfloat>//float.h
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);//utf-8
    puts("\tзавдання 1 ");
    puts("Реалізувати деякі арифметичні операції\n"
         "з данними різних типів");
    int c1 = 'C'+ 25;
    char c2 = 'C'+ 25;
    printf(" 'C' + 25 = %d\n", c1);
    printf(" 'С' + 25 = %c\n", c2);
    printf("2006 + (25 > 8) = %d\n", 2006 + (22 > 8));
    printf("2006 / (25 > 8) = %d\n", 2006 / (22 > 8));
    printf("2006 %% (25 > 8) = %d\n", 2006 % (22 > 8));
    printf("2006.0 / (25 > 8) = %f\n", 2006.0 / (22 > 8));
    printf("2006 << 2 = %d\n", 2006 << 1);
    printf("2006 >> 2 = %d\n", 2006 << 1);
}

