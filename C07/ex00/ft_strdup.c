/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 05:39:25 by fharifen          #+#    #+#             */
/*   Updated: 2023/12/19 04:14:37 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		i;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(*dest) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", ft_strdup(argv[1]));
	printf("%s\n", strdup(argv[1]));
}
*/
