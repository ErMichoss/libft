/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:24:28 by marvin            #+#    #+#             */
/*   Updated: 2023/10/02 14:54:36 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	if (str1 == str2)
		return (str1);
	if (str1 < str2)
	{
		ft_memcpy(str1, str2, n);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((char *)str1)[i - 1] = ((char *)str2)[i - 1];
			i--;
		}
	}
	return (str1);
}
