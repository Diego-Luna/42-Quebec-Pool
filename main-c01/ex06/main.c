/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:29:05 by iamongeo          #+#    #+#             */
/*   Updated: 2022/02/22 21:34:56 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("len of string %s : %d\n", argv[1], ft_strlen(argv[1]));
	}
	return (0);
}
