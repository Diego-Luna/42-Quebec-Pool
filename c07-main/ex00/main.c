/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:31:37 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/13 08:41:51 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strdup(char *src);

int	main(int arg, char **str)
{
	int i = 0;
	char *p;
	if (arg > 1)
	{
		p = ft_strdup(str[1]);
		printf("String 1: %s, pointer : %p\n", str[1], p);
		while (p[i])
		{
			printf("> value: %c \n", p[i]);
			p[i] = 'd';
			i++;
		}
	}
}
