/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:55:49 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 16:12:21 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

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
	char src[40] = "1234567890";
	char dest[12];


	printf("\n");
	printf("\nReturn the ft_strcpy: %s \n", ft_strncpy(dest, src, 5));

    printf("\nNew String dest: %s\n", dest);

	printf("\nNew string src: %s\n", src);
}
