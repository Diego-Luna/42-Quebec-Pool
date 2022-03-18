/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:39:55 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 12:41:55 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str);

int	main(void)
{
	char a[] = "1FGESddhdhsfhs n &*%$!!@#$&*7890";
	char b[] = "abcdefghijklmnopk";
	char c[] = "";

	printf("String a: %s\n", a);
	printf("String b: %s\n", b);
	printf("String c: %s\n", c);

	printf("\nResult a: %d\n", ft_str_is_lowercase(a));
	printf("\nResult b: %d\n", ft_str_is_lowercase(b));
	printf("\nResult a: %d\n", ft_str_is_lowercase(c));
}
