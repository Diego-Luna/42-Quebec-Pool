/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:18:17 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/14 13:10:31 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copi;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	copi = malloc((i + 1) * sizeof(char));
	if (!copi)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copi[i] = src[i];
		i++;
	}
	copi[i] = '\0';
	return (copi);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*p;
	int			i;

	i = 0;
	p = malloc((ac + 1) * sizeof(t_stock_str));
	if (!p)
	{
		return (NULL);
	}
	while (i < ac)
	{
		p[i].size = ft_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		i++;
	}
	p[i].str = 0;
	return (p);
}
