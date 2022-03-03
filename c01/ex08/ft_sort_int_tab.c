/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:44:23 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/02/28 20:24:06 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_change_value_a_to_b(int *tab1, int *tab2)
{
	int	temporary;

	temporary = *tab1;
	*tab1 = *tab2;
	*tab2 = temporary;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;

	index = -1;
	while (++index < (size - 1))
	{
		if (tab[index] > tab[index + 1])
		{
			ft_change_value_a_to_b(&tab[index], &tab[index + 1]);
			index = -1;
		}
	}
}
