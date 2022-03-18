
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
    int v0 = -10;
    int v1 = 2;
    int v2 = 11;
    int v3 = 0;
    int v4 = -3;

    printf("\nValor %d, power : %d\n", v0, ft_iterative_power(v0, 5));
    printf("\nValor %d, power : %d\n", v1, ft_iterative_power(v1, 2));
    printf("\nValor %d, power : %d\n", v2, ft_iterative_power(v2, 1));
    printf("\nValor %d, power : %d\n", v3, ft_iterative_power(v3, 6));
    printf("\nValor %d, power : %d\n", v3, ft_iterative_power(v3, 0));
    printf("\nValor %d, power : %d\n", v4, ft_iterative_power(v4, -10));
}
