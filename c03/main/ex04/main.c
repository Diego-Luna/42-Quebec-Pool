/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:58:39 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 19:19:24 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find);

#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[50] = "Hello World 123456789";
	char b[50] = "World";
	char c[50] = " ibjkasoialo Hello World 123456789 aibhfnc";

	char a1[50] = "Hello World 123456789";
	char b1[50] = "World";
	char c1[50] = " ibjkasoialo Hello World 123456789 aibhfnc";

	printf("\nValue a: %s\n", a);
	printf("Value b: %s\n", b);
	printf("Value c: %s\n", c);
	
	printf("strncat ->a,b: %s\n", strstr(a,b));
	printf("strncat ->a,c: %s\n", strstr(c,b));
	printf("strncat ->a,c: %s\n", strstr(a,c));
	printf("strncat ->a,c: %s\n", strstr(a,""));

	printf("ft_strncat ->a,b: %s\n", ft_strstr(a1,b1));
	printf("ft_strncat ->a,c: %s\n", ft_strstr(c1,b1));
	printf("ft_strncat ->a,c: %s\n", ft_strstr(a1,c1));
	printf("ft_strncat ->a,c: %s\n", ft_strstr(a1,""));
}
