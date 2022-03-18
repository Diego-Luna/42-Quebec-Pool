#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	printf("ft_find_next_prime 4: %d\n", ft_find_next_prime(4));
	printf("ft_find_next_prime 25: %d\n", ft_find_next_prime(25));
	printf("ft_find_next_prime 266256: %d\n", ft_find_next_prime(266256));
	printf("ft_find_next_prime 985: %d\n", ft_find_next_prime(985));
	printf("ft_find_next_prime 98: %d\n", ft_find_next_prime(98));
	printf("ft_find_next_prime 65: %d\n", ft_find_next_prime(65));
	printf("ft_find_next_prime 487: %d\n", ft_find_next_prime(487));
	printf("ft_find_next_prime 5: %d\n", ft_find_next_prime(5));
	printf("ft_find_next_prime 0: %d\n", ft_find_next_prime(0));
	printf("ft_find_next_prime -5: %d\n", ft_find_next_prime(-5));
	printf("ft_find_next_prime 1: %d\n", ft_find_next_prime(1));
}