/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:37:22 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/08 10:33:52 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_recursive_factorial(int nb);
{
	if (nb <= 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		return (ft_iterative_factorial(nb - 1) * nb);
	}
}