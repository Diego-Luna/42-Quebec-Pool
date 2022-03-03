/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:46:26 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/02/26 18:38:18 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_values(int v1, int v2)
{
	v1 += 48;
	v2 += 48;
	write(1, &v1, 1);
	write(1, &v2, 1);
}

void	ft_write(int a, int b)
{
	ft_write_values(a / 10, a % 10);
	write(1, " ", 1);
	ft_write_values(b / 10, b % 10);
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a;
		while (++b < 100)
		{
			ft_write(a, b);
		}
		a ++;
	}
}
