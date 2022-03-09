/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:07:50 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/09 16:17:42 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
	{
		return (0);
	}
	while (result * result <= nb)
	{
		if (result * result == nb)
		{
			return (result);
		}
		else if (result >= 46341)
		{
			return (0);
		}
		result ++;
	}
	return (0);
}
