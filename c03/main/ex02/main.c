/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:49:34 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 17:36:27 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src);

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
	
	printf("strcat ->a,b: %s -> %s\n", strcat(a,b), a);
	printf("strcat ->a,c: %s -> %s\n", strcat(a,c), a);
	
	printf("ft_strcat ->a,b: %s -> %s\n", ft_strcat(a1,b1), a1);
	printf("ft_strcat ->a,c: %s -> %s\n", ft_strcat(a1,c1), a1);
}
