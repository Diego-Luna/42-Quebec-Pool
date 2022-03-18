/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:18:57 by iamongeo          #+#    #+#             */
/*   Updated: 2022/02/22 20:27:43 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	n1;
	int	n2;
	
	n1 = 42;
	n2 = 99;
	printf("Preswap : %d, %d\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("Postswap : %d, %d\n", n1, n2);
	return (0);
}
