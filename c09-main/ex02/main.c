/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:17:45 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/16 09:26:18 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split(char *str, char *charset);

int main(int argn, char **args)
{
    char **strs;
    int i;

    (void)argn;
    i = 0;
    strs = ft_split(args[1], args[2]);
    while (strs[i])
    {
        printf(">%s\n", strs[i]);
        i++;
    }
    return (0);
}