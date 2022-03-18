/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 06:44:06 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 07:15:37 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char a[] = "AMSKIFhDRgsdgsgRRSGaeg";
	char b[] = "ab5283272349ndjk a";
	char c[] = "";

	printf("\nString a: %s\n", a);
	printf("String b: %s\n", b);
	printf("String c: %s\n", c);

	printf("\nResult a: %s\n", ft_strlowcase(a));
	printf("\nResult b: %s\n", ft_strlowcase(b));
	printf("\nResult a: %s\n", ft_strlowcase(c));
}
