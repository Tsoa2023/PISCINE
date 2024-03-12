/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:06:20 by fharifen          #+#    #+#             */
/*   Updated: 2023/12/21 07:37:11 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	d_len;
	int	i;

	i = 0;
	d_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (dest);
}

int	ft_len(int size, char **strs, char *sep)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ((size - 1) * ft_strlen(sep));
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_f;
	int		i;
	int		len;

	len = ft_len(size, strs, sep);
	if (size <= 0)
	{
		str_f = malloc(sizeof(char));
		*str_f = '\0';
		return (str_f);
	}
	str_f = (char *)malloc(sizeof(char) * (len + 1));
	if (str_f == NULL)
		return (NULL);
	i = 0;
	*str_f = 0;
	while (i < size)
	{
		ft_strcat(str_f, strs[i]);
		if (i < size - 1)
			ft_strcat(str_f, sep);
		i++;
	}
	return (str_f);
}
/*
#include <stdio.h>
int main(int argc, char  **argv)
{	
	(void)argc;
	printf("%s\n", ft_strjoin(3, argv + 1, "++"));
}*/
