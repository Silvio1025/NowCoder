//判断三条边能否构成三角形，若能，判断其类型（等边、等腰或普通）。

#include <stdio.h>
int main() 
{
    int a = 1, b = 1, c = 1;

    while (scanf("%d %d %d", &a, &b, &c) != EOF) 
    {
        if (a + b > c && a + c > b && b + c > a) 
        {
            if (a == b && b == c) 
            {
                printf("Equilateral triangle!\n");
            }
            else if (a == b || b == c || a == c) 
            {
                printf("Isosceles triangle!\n");
            }
            else
                printf("Ordinary triangle!\n");
        }
        else
            printf("Not a triangle!\n");
    }
    
    return 0;
}