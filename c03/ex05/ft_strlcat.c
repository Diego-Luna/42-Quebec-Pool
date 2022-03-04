/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:19:19 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 21:04:45 by dluna-lo         ###   ########.fr       */
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
	unsigned int	length_src;

	i = 0;
	length_dest = ft_str_length(dest);
	length_src = ft_str_length(src);
	if (size <= length_dest)
		return (length_src + size);
	while (src[i] != '\0' && i < (size -1))
	{
		dest[i + length_dest] = src[i];
		i++;
	}
	dest[i + length_dest] = '\0';
	return (length_dest + length_src);
}
