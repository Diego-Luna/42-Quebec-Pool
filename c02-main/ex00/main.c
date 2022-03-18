/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:05:43 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 15:03:18 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	main(void)
{
	char b[] = "0123456789";
	char a[] = "abcdefghijklmnopk";
	
	printf("\nString a:\n");
	ft_putstr(a);

	printf("\nString b:\n");
	ft_putstr(b);
	
	printf("\n");
	printf("\nReturn the ft_strcpy: %s \n", ft_strcpy(a, b));

    printf("\nNew String a:\n");
	ft_putstr(a);

	printf("\nNew string b:\n");
	ft_putstr(b);
}

