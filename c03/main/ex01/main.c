/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:49:34 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 14:16:11 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n);

#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[15] = "qs2e874g5d78f2";
	char b[15] = "ts2jdfbwikfhsk";
	char c[15] = "ts2hjsbdidvdiwb";

	printf("\nValue a: %s\n", a);
	printf("Value b: %s\n", b);
	printf("Value c: %s\n", c);
	
	printf("strncmp ->a,b: %d\n", strncmp(a,b,5));
	printf("strncmp ->b,a: %d\n", strncmp(b,a,4));
	printf("strncmp ->a,c: %d\n", strncmp(a,c,3));
	printf("strncmp ->c,a: %d\n", strncmp(c,a,2));
	printf("strncmp ->b,c: %d\n", strncmp(b,c,1));
	printf("strncmp ->c,c: %d\n", strncmp(c,c,0));

	printf("ft_strncmp ->a,b: %d\n", ft_strncmp(a,b,5));
	printf("ft_strncmp ->b,a: %d\n", ft_strncmp(b,a,4));
	printf("ft_strncmp ->a,c: %d\n", ft_strncmp(a,c,3));
	printf("ft_strncmp ->c,a: %d\n", ft_strncmp(c,a,2));
	printf("ft_strncmp ->b,c: %d\n", ft_strncmp(b,c,1));
	printf("ft_strncmp ->c,c: %d\n", ft_strncmp(c,c,0));
}
