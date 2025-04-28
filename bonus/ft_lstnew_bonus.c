/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:46:01 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/28 14:44:57 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list nlist;
	
	nlist = malloc(sizeof(t_list));
	if (!nlist)
		return (NULL);
	nlist->content = content;
	nlist->next = NULL;
	return (nlist);
}
