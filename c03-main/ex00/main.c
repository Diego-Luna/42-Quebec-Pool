/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:49:34 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 13:46:25 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2);

#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[15] = "abcdefuwghdiq<";
	char b[15] = "ABCDEF";
	char c[15] = "ABCDEF";

	printf("\nValue a: %s\n", a);
	printf("Value b: %s\n", b);
	printf("Value c: %s\n", c);
	
	printf("strcmp ->a,b: %d\n", strcmp(a,b));
	printf("strcmp ->b,a: %d\n", strcmp(b,a));
	printf("strcmp ->a,c: %d\n", strcmp(a,c));
	printf("strcmp ->c,a: %d\n", strcmp(c,a));
	printf("strcmp ->b,c: %d\n", strcmp(b,c));

	printf("ft_strcmp ->a,b: %d\n", ft_strcmp(a,b));
	printf("ft_strcmp ->b,a: %d\n", ft_strcmp(b,a));
	printf("ft_strcmp ->a,c: %d\n", ft_strcmp(a,c));
	printf("ft_strcmp ->c,a: %d\n", ft_strcmp(c,a));
	printf("ft_strcmp ->b,c: %d\n", ft_strcmp(b,c));
}
