/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 05:21:15 by fharifen          #+#    #+#             */
/*   Updated: 2023/12/13 09:15:11 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
