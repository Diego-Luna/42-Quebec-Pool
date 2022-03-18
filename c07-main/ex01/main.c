/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:12:21 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/12 11:57:52 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int	main()
{
	int *result;
	int i = 0;

	int	min =  1;
	int max =  10;
	printf("min: %d, max: %d \n", min, max);

	result = ft_range(min, max);
	while (i < (max - min))
	{
		printf("> %d\n", result[i]);
		i++;
	}
}
