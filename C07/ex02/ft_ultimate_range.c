/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 08:45:53 by fharifen          #+#    #+#             */
/*   Updated: 2023/12/19 04:22:27 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	len = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = malloc(sizeof(tab) * len);
	if (tab == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (len);
}
/*
#include <stdio.h>
int main(void)
{
	int i;
	int *r;

	printf("Length = %d\n",ft_ultimate_range(&r,1, 9));
	i = 0;
	while (i < (9 - 1))
	{
		printf("r[%d] : %d\n", i, r[i]);
		i++;
	}
}
*/
