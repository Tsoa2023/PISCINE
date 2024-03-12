/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:43:57 by fharifen          #+#    #+#             */
/*   Updated: 2023/12/10 19:10:21 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	d_size;

	i = 0;
	d_size = 0;
	while (dest[d_size])
		d_size++;
	while (src[i] && (d_size < (size - 1)))
	{
		dest[d_size] = src[i];
		d_size++;
		i++;
	}
	dest[d_size] = '\0';
	return (d_size);
}
