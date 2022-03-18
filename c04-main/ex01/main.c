/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:44:44 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/07 11:41:17 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

#include <stdio.h>
int	main(void)
{
	char	a[50] = "Hello";
	char	b[50] = "W=";

	printf("\nValue a: %s\n", a);
	printf("Value b: %s\n", b);

	ft_putstr(a);
	ft_putstr("\n");
	ft_putstr(b);
}
