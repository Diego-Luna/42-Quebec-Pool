/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:57:53 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/07 09:43:55 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	counter;
	int	index;

	counter = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[counter] != '\0')
	{
		index = 0;
		while (str[counter + index] == to_find[index])
		{
			if (to_find[index + 1] == '\0')
				return (str + counter);
			index++;
		}
		counter++;
	}
	return (0);
}
