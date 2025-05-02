/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 01:18:22 by egiraud           #+#    #+#             */
/*   Updated: 2025/05/01 20:14:48 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elem, size_t size)
{
	void	*tmp;

	tmp = malloc(elem * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, elem * size);
	return (tmp);
}
