/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:53:26 by iamongeo          #+#    #+#             */
/*   Updated: 2022/02/22 21:04:28 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(int argc, char *argv[])
{
	int	numer;
	int	denom;
	int	div;
	int	mod;

	if (argc > 2)
	{
		numer = atoi(argv[1]);
		denom = atoi(argv[2]);
		printf("Numerator, Divider :	%d, %d\n", numer, denom);
		ft_div_mod(numer, denom, &div, &mod);
		printf("div, mod :		%d, %d\n", div, mod);
	}
	return (0);
}
