/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 07:17:00 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 07:54:14 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char b[] = "sALUT, cOMMENT tU vAS ? 42mOTS qUARANTE-DEUX; cINQUANTE+ET+UN";
	char c[] = "E8<A#G9m%3I173R<C4";
	char d[] = "Q_]ds|Spw)Xs1/#`w9>7A";
	char e[] = "Totzfe5Z/Eocp_9`6{ Akf.";
	char f[] = "V;Hnwf:Yuz2Hnp*]F66'N @D*F7&>Uub#$";
	char g[] = ">Ftvatx@'%N3Wg&Ep";
	char h[] = "5[:>Wj^Km}Rekoi~B Ufoju0,8+Eo0Nzpr{";

	printf("\nString a: %s\n", a);
	printf("String b: %s\n", b);
	printf("String c: %s\n", c);
	printf("String d: %s\n", d);
	printf("String e: %s\n", e);
	printf("String f: %s\n", f);
	printf("String g: %s\n", g);
	printf("String h: %s\n", h);

	printf("\nResult a: %s\n", ft_strcapitalize(a));
	printf("\nResult b: %s\n", ft_strcapitalize(b));
	printf("\nResult b: %s\n", ft_strcapitalize(c));
	printf("\nResult d: %s\n", ft_strcapitalize(d));
	printf("\nResult e: %s\n", ft_strcapitalize(e));
	printf("\nResult f: %s\n", ft_strcapitalize(f));
	printf("\nResult g: %s\n", ft_strcapitalize(g));
	printf("\nResult h: %s\n", ft_strcapitalize(h));
}
