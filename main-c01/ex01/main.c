/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:05:22 by iamongeo          #+#    #+#             */
/*   Updated: 2022/02/22 20:14:59 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	i0;
	int	*i1;
	int	**i2;
	int	***i3;
	int	****i4;
	int	*****i5;
	int	******i6;
	int	*******i7;
	int	********i8;
	int	*********i9;


	i0 = 0;
	i1 = &i0;
	i2 = &i1;
	i3 = &i2;
	i4 = &i3;
	i5 = &i4;
	i6 = &i5;
	i7 = &i6;
	i8 = &i7;
	i9 = &i8;
	
	printf("original nbr : %d\n", i0);
	ft_ultimate_ft(i9);
	printf("ultimate nbr : %d\n", i0);
}
