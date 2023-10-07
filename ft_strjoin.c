/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:19:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/02 16:39:51 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_sticky(char const *s1, char const *s2, char *cadena)
{
	int	j;
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		cadena[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		cadena[i] = s2[j];
		i++;
		j++;
	}
	cadena[i] = '\0';
	return (cadena);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*cadena;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	cadena = (char *)malloc(len1 + len2 + 1);
	if (cadena == NULL)
		return (NULL);
	cadena = ft_sticky(s1, s2, cadena);
	return (cadena);
}
