/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 06:28:29 by fharifen          #+#    #+#             */
/*   Updated: 2023/12/21 13:59:53 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	po_nbr(int n)
{
	int	rest;

	rest = (n % 10) + '0';
	if (n > 9)
		po_nbr(n / 10);
	ft_putchar(rest);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		po_nbr(-nb);
	}
	else
	{
		po_nbr(nb);
	}
}

void	ft_putstr(char *str)
{
	if (*str)
	{
		write (1, str, 1);
		ft_putstr (str + 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
