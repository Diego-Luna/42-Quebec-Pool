/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:57:59 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/07 12:09:01 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb);
#include <stdio.h>
int	main(void)
{
	int a = -439714;
	int	b = 123456;

	printf("\nValue a: %d\n", a);
	printf("Value b: %d\n", b);

	ft_putnbr(a);
}