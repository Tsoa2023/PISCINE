/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharifen <fharifen@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:57:18 by fharifen          #+#    #+#             */
/*   Updated: 2023/12/06 10:55:28 by fharifen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z' )
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_maju(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int	is_minu(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !is_alpha(str[i]))
			i++;
		if (str[i] && is_minu(str[i]))
			str[i] -= 32;
		i++;
		while (str[i] && is_alpha(str[i]))
		{
			if (is_maju(str[i]))
				str[i] += 32;
			i++;
		}
		i++;
	}
	return (str);
}
