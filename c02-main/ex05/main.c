/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:58:26 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/01 19:03:00 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char a[] = "1FGESddhdhsfhs n &*%$!!@#$&*7890";
	char b[] = "FDMKOABRHYFBSKDBSWKCDBSKID";
	char c[] = "";

	printf("String a: %s\n", a);
	printf("String b: %s\n", b);
	printf("String c: %s\n", c);

	printf("\nResult a: %d\n", ft_str_is_uppercase(a));
	printf("\nResult b: %d\n", ft_str_is_uppercase(b));
	printf("\nResult a: %d\n", ft_str_is_uppercase(c));
}
