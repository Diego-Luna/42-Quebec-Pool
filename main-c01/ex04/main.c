/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:53:26 by iamongeo          #+#    #+#             */
/*   Updated: 2022/02/22 21:14:02 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("Numerator, Divider :	%d, %d\n", a, b);
		ft_ultimate_div_mod(&a, &b);
		printf("div, mod :		%d, %d\n", a, b);
	}
	return (0);
}
