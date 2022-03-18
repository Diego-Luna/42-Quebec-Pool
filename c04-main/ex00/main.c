/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:46:10 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/04 08:38:53 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str);

#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[50] = "Hello";
	char b[50] = "W=";
	char a1[50] = "Hello";
	char b1[50] = "W=";

	printf("\nValue a: %s\n", a);
	printf("Value b: %s\n", b);

	printf("strlen ->a: %zu -> %s\n", strlen(a), a);
	printf("strlen ->b: %zu -> %s\n", strlen(b), b);

	printf("ft_strlen ->a: %d -> %s\n", ft_strlen(a1), a1);
	printf("ft_strlen ->b: %d -> %s\n", ft_strlen(b1), b1);
}
