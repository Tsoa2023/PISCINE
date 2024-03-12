/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <fharifen@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 07:31:16 by fharifen          #+#    #+#             */
/*   Updated: 2023/11/30 19:50:33 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_comb(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7' )
	{
		b = a + 1;
		while (b <= '8' )
		{
			c = b + 1;
			while (c <= '9' )
			{
				put_comb(a, b, c);
				if (a != '7' || b != '8' || c != '9' )
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
