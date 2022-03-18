/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 08:51:03 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 08:12:06 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char a[] = "1234567890";
	char b[] = "abcdjuygfvbandskfhjbnsvajkfibnakfjhbn";
	int	s;

	printf("\nString a: %s\n", a);
	printf("String b: %s\n", b);
	
	s = ft_strlcpy(b, a, 3);

	printf("Copied '%s' into '%s', length %d\n", a, b, s);
}
