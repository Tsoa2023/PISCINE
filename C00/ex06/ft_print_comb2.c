/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <fharifen@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:51:36 by fharifen          #+#    #+#             */
/*   Updated: 2023/11/30 20:16:39 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb2(int x, int y)
{
	ft_putchar(x / 10 + '0' );
	ft_putchar(x % 10 + '0' );
	ft_putchar(' ');
	ft_putchar(y / 10 + '0' );
	ft_putchar(y % 10 + '0' );
	if ((x / 10 != 9) || (x % 10 != 8))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putcomb2(i, j);
			j++;
		}
		i++;
	}
}
