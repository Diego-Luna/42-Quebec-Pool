/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:17:44 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/01 07:21:44 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("Program name with ft_putchar : \n");
		ft_putstr(argv[0]);
	}
	return (0);
}
