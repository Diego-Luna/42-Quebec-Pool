/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:19:29 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 17:36:24 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	length_dest;

	i = 0;
	length_dest = ft_str_length(dest);
	while (src[i] != '\0')
	{
		dest[i + length_dest] = src[i];
		i++;
	}	
	dest[i + length_dest] = '\0';
	return (dest);
}
