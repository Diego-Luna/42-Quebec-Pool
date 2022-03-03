/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 07:19:08 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 07:46:29 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_number(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	char_lower(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	char_upper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && char_lower(str[i]))
			str[i] -= 32;
		else if (char_lower(str[i])
			&& !(char_upper(str[i - 1]))
			&& !(char_lower(str[i - 1]))
			&& !(char_number(str[i - 1])))
		{
			str[i] -= 32;
		}
		else if (char_upper(str[i])
			&& (char_upper(str[i - 1])
				|| char_lower(str[i - 1])
				|| char_number(str[i - 1])))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
