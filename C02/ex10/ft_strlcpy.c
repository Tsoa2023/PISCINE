/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <fharifen@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:07:21 by fharifen          #+#    #+#             */
/*   Updated: 2023/12/19 14:39:28 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcp(char *dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	while (*(src + len) && --size)
		*dest++ = *(src + len++);
	*dest = '\0';
	while (*(src + len))
		++len;
	return (len);
}
