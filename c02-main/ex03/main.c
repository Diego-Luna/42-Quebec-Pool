/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:55:51 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 12:36:53 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_numeric(char *str);

int	main(void)
{
	char a[] = "1234567890";
	char b[] = "abcdefghijklmnopk5";
	char c[] = "";

	printf("String a: %s\n", a);
	printf("String b: %s\n", b);
	printf("String c: %s\n", c);

	printf("\nResult a: %d\n", ft_str_is_numeric(a));
	printf("\nResult b: %d\n", ft_str_is_numeric(b));
	printf("\nResult a: %d\n", ft_str_is_numeric(c));
}
