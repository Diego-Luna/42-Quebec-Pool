#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
    printf("> ft_fibonacci(-1) : %d\n", ft_fibonacci(-1));
    printf("> ft_fibonacci(1) : %d\n", ft_fibonacci(1));
    printf("> ft_fibonacci(4) : %d\n", ft_fibonacci(4));
    printf("> ft_fibonacci(6) : %d\n", ft_fibonacci(6));
    printf("> ft_fibonacci(10) : %d\n", ft_fibonacci(10));
}