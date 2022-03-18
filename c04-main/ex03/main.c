#include <stdio.h>

int ft_atoi(char *str);

int	main(void)
{
//	char    a[50] = " ---+--+1234ab567";
//	char    b[50] = "++1 2OPSHJKFBJNDBLJVWK";

	/*
    printf("\nValue a: %s\n", a);
	printf("Value b: %s\n", b);

	printf("\nValue a: %d\n", ft_atoi(a));
	printf("Value b: %d\n", ft_atoi(b));*/

    printf("%d\n", ft_atoi(" ---+--+1234ab567"));
    printf("%d\n", ft_atoi("++1 2OPSHJKFBJNDBLJVWK"));
    printf("%d\n", ft_atoi(" ---+-+1234ab567"));
}
