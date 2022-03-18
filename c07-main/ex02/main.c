/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 08:23:23 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/12 08:29:05 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main()
{
	int		*range;
	int		i;
    int min = 1;
    int max = 5;
    
	i = 0;
	printf("Min: %d, Max: %d, return : %d\n", min, max, ft_ultimate_range(&range, min, max));
	while (i < (max - min))
	{
	    printf("> %d\n", range[i]);
		i++;
	}
	return (0);
}
