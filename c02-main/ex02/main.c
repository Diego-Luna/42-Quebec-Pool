/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:22:16 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 12:33:26 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char a[] = "1234567890abcvdgf";
	char b[] = "EWQQDaaaajdgs";
	char c[] = "";

	printf("String a: %s\n", a);
	printf("String b: %s\n", b);
	printf("String c: %s\n", c);

	printf("\nResult a: %d\n", ft_str_is_alpha(a));
	printf("\nResult b: %d\n", ft_str_is_alpha(b));
	printf("\nResult a: %d\n", ft_str_is_alpha(c));
}
