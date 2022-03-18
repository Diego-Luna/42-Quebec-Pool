/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 20:00:55 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 06:43:31 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char a[] = "AMSKIFhDRgsdgsgRRSGaeg";
	char b[] = "ab5283272349ndjk a";
	char c[] = "";

	printf("\nString a: %s\n", a);
	printf("String b: %s\n", b);
	printf("String c: %s\n", c);

	printf("\nResult a: %s\n", ft_strupcase(a));
	printf("\nResult b: %s\n", ft_strupcase(b));
	printf("\nResult a: %s\n", ft_strupcase(c));
}
