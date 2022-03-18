#include <stdio.h>

int	ft_is_prime(int nb);

int main(void)
{
	printf("el numero 4 es primo: %d\n", ft_is_prime(4));
	printf("el numero 25 es primo: %d\n", ft_is_prime(25));
	printf("el numero 266256 es primo: %d\n", ft_is_prime(266256));
	printf("el numero 985 es primo: %d\n", ft_is_prime(985));
	printf("el numero 98 es primo: %d\n", ft_is_prime(98));
	printf("el numero 65 es primo: %d\n", ft_is_prime(65));
	printf("el numero 487 es primo: %d\n", ft_is_prime(487));
	printf("el numero 5 es primo: %d\n", ft_is_prime(5));
	printf("el numero 0 es primo: %d\n", ft_is_prime(0));
	printf("el numero -5 es primo: %d\n", ft_is_prime(-5));
	printf("el numero 1 es primo: %d\n", ft_is_prime(1));
}
