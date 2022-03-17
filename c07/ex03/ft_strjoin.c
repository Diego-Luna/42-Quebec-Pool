/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 08:48:11 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/12 20:13:02 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strln(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	ft_strcat(char *dest, char *src)
{
	int	i;
	int	long_dest;

	i = 0;
	long_dest = ft_strln(dest);
	while (src[i])
	{
		dest[long_dest + i] = src[i];
		i++;
	}
	return (*dest);
}

int	ft_strlogn(int size, char **strs, char *sep)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght += ft_strln(strs[i]);
		i++;
	}
	lenght += ((size - 1) * ft_strln(sep));
	if (size <= 0 || lenght <= 0)
	{
		lenght = 1;
	}
	return (lenght);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		lenght;
	char	*result;

	i = 0;
	if (size == 0)
	{
		result = malloc(sizeof(char));
		return (result);
	}
	lenght = ft_strlogn(size, strs, sep);
	result = malloc(lenght * sizeof(char));
	if (!result)
		return (NULL);
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if ((i + 1) < size)
		{
			ft_strcat(result, sep);
		}
		i++;
	}
	result[lenght] = '\0';
	return (result);
}
