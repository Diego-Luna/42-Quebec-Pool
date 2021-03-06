/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:20:20 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/09 19:52:44 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arg, char **str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	if (arg > 1)
	{
		while ((arg - n) > 0)
		{
			while (str[arg - n][i])
			{
				write(1, &str[arg - n][i], 1);
				i++;
			}
			n++;
			i = 0;
			write(1, "\n", 1);
		}
	}
}
