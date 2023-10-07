/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:10:29 by marvin            #+#    #+#             */
/*   Updated: 2023/10/02 15:32:36 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*dup;

	i = ft_strlen(s);
	dup = (char *)malloc(i + 1);
	if (dup != NULL)
	{
		j = 0;
		while (s[j] != '\0')
		{
			dup[j] = s[j];
			j++;
		}
		dup[j] = '\0';
	}
	return (dup);
}
