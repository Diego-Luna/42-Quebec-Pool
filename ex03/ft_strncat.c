/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:38:09 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 17:56:05 by dluna-lo         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	length_dest;

	i = 0;
	length_dest = ft_str_length(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[i + length_dest] = src[i];
		i++;
	}
	dest[i + length_dest] = '\0';
	return (dest);
}
