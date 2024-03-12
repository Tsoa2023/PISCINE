/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 06:22:21 by fharifen          #+#    #+#             */
/*   Updated: 2023/12/19 04:20:58 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	len = max - min;
	if (min < max)
	{
		tab = (int *) malloc(sizeof(*tab) * (len + 1));
		if (tab == NULL)
			return (NULL);
		i = 0;
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		return (tab);
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	int i;

	i = 0;
	while (i < (9 - 1))
	{
		printf("%d\n",ft_range(1, 9)[i]);
		i++;
	}
}
*/
