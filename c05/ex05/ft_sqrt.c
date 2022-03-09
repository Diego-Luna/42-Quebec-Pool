/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:07:50 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/09 09:47:39 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_recursion(int nb, int counter)
{
	if (counter * counter == nb)
	{
		return (counter);
	}
	else if (counter * counter > nb)
		return (0);
	else
		return (ft_sqrt_recursion(nb, counter + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recursion(nb, 1));
}
