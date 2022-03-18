/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:36:32 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/15 10:09:32 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int main(void)
{
    int v0 = -10;
    int v1 = 2;
    int v2 = 11;

    printf("\nValor %d, factorial : %d\n", v0, ft_recursive_factorial(v0));
    printf("\nValor %d, factorial : %d\n", v1, ft_recursive_factorial(v1));
    printf("\nValor %d, factorial : %d\n", v2, ft_recursive_factorial(v2));
}

