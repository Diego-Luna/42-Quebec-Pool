/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:51:23 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/14 13:42:50 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(int arg, char **str)
{
    t_stock_str	*p;
    if (arg >= 2)
    {
        p = ft_strs_to_tab(arg, str);
        ft_show_tab(p);
    }
}