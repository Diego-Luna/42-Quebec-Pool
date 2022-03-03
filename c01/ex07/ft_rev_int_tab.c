/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:58:05 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/02/28 14:38:21 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temporary;
	int	i;

	i = -1;
	while (++i < size / 2)
	{
		temporary = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = temporary;
	}
}
