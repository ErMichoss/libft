/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:18:05 by marvin            #+#    #+#             */
/*   Updated: 2023/09/24 10:38:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t b)
{
	void	*cadena;

	cadena = malloc(n * b);
	if (!cadena)
		return (NULL);
	else
	{
		ft_bzero(cadena, (n * b));
		return (cadena);
	}
}
