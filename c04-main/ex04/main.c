/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:02:41 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/09 07:27:28 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	int a = -439714;
	int	b = 123456;
	int	c = 987654;
	int	d = 455;

    char sa[50] = "0123456789";
    char sb[50] = "01";
    char sc[50] = "0123456789ABCDEF";
    char sd[50] = "0123456789";

	printf("\n> Value a: %d, base: %s\n", a, sa);
	printf("\n> Value b: %d, base: %s\n", b, sb);
	printf("\n> Value c: %d, base: %s\n", c, sc);
	printf("\n> Value d: %d, base: %s\n", d, sd);

	ft_putnbr_base(a, sa);
	ft_putnbr_base(b, sb);
	ft_putnbr_base(c, sc);
	ft_putnbr_base(d, sd);
}
