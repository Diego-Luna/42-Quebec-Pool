/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:05:43 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 12:47:56 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char a[] = "\n";
	char b[] = "abcdefghijklmnopk";
	char c[] = "";

	printf("String a: %s\n", a);
	printf("String b: %s\n", b);
	printf("String c: %s\n", c);

	printf("\nResult a: %d\n", ft_str_is_printable(a));
	printf("\nResult b: %d\n", ft_str_is_printable(b));
	printf("\nResult a: %d\n", ft_str_is_printable(c));
}
