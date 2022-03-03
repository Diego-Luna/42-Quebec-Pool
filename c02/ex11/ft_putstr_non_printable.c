/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:15:05 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 18:52:15 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_decimal(int c, int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c > 16)
	{
		ft_decimal(c / 16, n + 1);
		ft_decimal(c % 16, n + 1);
	}
	else
	{
		if (n == 0)
			ft_write('0');
		ft_write(hex[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_write('\\');
			ft_decimal(str[i], 0);
		}
		else
			ft_write(str[i]);
		i++;
	}
}
