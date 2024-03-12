/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:23:07 by fharifen          #+#    #+#             */
/*   Updated: 2023/12/14 15:47:43 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (*str)
	{
		write (1, str, 1);
		ft_putstr (str + 1);
	}
}

void	ft_print(char **tab)
{
	while (*tab)
	{
		ft_putstr (*tab++);
		ft_putchar('\n');
	}
}

void	ft_sort(char **tab, int n)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < (n - 1))
	{
		j = 0;
		while (tab[i][j] == tab[i + 1][j])
			j++;
		if (tab[i][j] > tab[i + 1][j])
		{
			tmp = tab[i];
			tab[i] = tab [i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_sort(argv, argc);
		ft_print(argv + 1);
	}
	return (0);
}
