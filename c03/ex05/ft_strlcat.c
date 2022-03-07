/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:19:19 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/04 10:01:31 by dluna-lo         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length_dest;

	i = 0;
	length_dest = ft_str_length(dest);
	if (size < length_dest)
		return (ft_str_length(src) + size);
	while (src[i] != '\0' && length_dest < (size - 1))
	{
		dest[length_dest] = src[i];
		i++;
		length_dest++;
	}
	dest[length_dest] = '\0';
	return (length_dest);
}
