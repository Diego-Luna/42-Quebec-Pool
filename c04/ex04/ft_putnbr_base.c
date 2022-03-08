/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 06:55:56 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/08 09:02:26 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_number_repit(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0' )
	{
		j = 0;
		while (base[j] != '\0' )
		{
			if (base[i] == base[j] && i != j)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_base_check(char *base)
{
	int	i;

	i = 0;
	if (base[0] == '\0')
	{
		return (1);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
		{
			return (1);
		}
		i++;
	}
	if (i == 1)
	{
		return (1);
	}
	if (ft_number_repit(base))
	{
		return (1);
	}
	return (0);
}

void	ft_write(int n, char *base)
{
	write(1, &base[n], 1);
}

void	ft_putnbr(int nb, char *base, int length)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / length, base, length);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb, base, length);
	}
	else
	{
		if (nb >= (length + 1))
		{
			ft_putnbr(nb / length, base, length);
		}
		ft_write(nb % length, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	if (ft_base_check(base))
	{
		return ;
	}
	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	ft_putnbr(nbr, base, (i));
}
