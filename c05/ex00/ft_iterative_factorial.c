/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:13:18 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/08 12:58:18 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb > 0)
		result = nb;
	else
		result = 0;
	nb--;
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
