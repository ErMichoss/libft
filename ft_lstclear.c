/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:44:13 by nicgonza          #+#    #+#             */
/*   Updated: 2023/10/05 18:08:32 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	t = *lst;
	while (t)
	{
		del (t->content);
		*lst = t->next;
		free (t);
		t = *lst;
	}
	*lst = NULL;
}
