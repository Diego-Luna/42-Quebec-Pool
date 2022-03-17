/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:03:40 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/12 20:15:28 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*array;

	i = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	if (range < 0)
		range *= -1;
	array = malloc(range * sizeof(int));
	if (!array)
		return (NULL);
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
