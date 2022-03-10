/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:18:27 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/10 10:32:14 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

void	ft_change_value_a_to_b(char *str1, char *str2)
{
	char	tep[50];
	int i;

	i = 0;
	while (i < 50)
	{
		tep[i] = '0';
		i++;
	}
	
	ft_strcpy(tep, str1);
	ft_strcpy(str1, str2);
	ft_strcpy(str2, tep);
}

void	ft_print(int arg, char **str)
{
	int	i;
	int	n;

	n = 1;
	i = 0;
	if (arg > 1)
	{
		while (str[n])
		{
			while (str[n][i])
			{
				write(1, &str[n][i], 1);
				i++;
			}
			n++;
			i = 0;
			write(1, "\n", 1);
		}
	}
}

#include <stdio.h>
int main(int arg, char **str)
{
	int n;
	int i;
	int	result;

	n = 1;
	i = 0;

	if (arg > 2)
	{
		while (n < arg)
		{
			if (n == 1)
				result = ft_strcmp(str[n], str[n + 1]);
			//else
			//	result = ft_strcmp(str[n], str[n - 1]);
			
			if (result != 0 && n == 1)
			{
				ft_change_value_a_to_b(str[n + 1], str[n]);
			}
			else  if (result < 0)
			{
				ft_change_value_a_to_b(str[n - 1], str[n]);
				n = 1;
			}
			n++;
		}
		ft_print(arg, str);
		//printf("input 1 %s", str[1]);
	}
}
