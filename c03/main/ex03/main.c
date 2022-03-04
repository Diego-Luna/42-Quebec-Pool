/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:38:26 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 17:57:03 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb);

#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[50] = "Hello";
	char b[50] = "World";
	char c[50] = " 1234567";
	char a1[50] = "Hello";
	char b1[50] = "World";
	char c1[50] = " 1234567";

	printf("\nValue a: %s\n", a);
	printf("Value b: %s\n", b);
	printf("Value c: %s\n", c);

	printf("strncat ->a,b: %s -> %s\n", strncat(a,b,3), a);
	printf("strncat ->a,c: %s -> %s\n", strncat(a,c,3), a);

	printf("ft_strncat ->a,b: %s -> %s\n", ft_strncat(a1,b1, 3), a1);
	printf("ft_strncat ->a,c: %s -> %s\n", ft_strncat(a1,c1, 3), a1);
}
