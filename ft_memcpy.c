/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:24:00 by egiraud           #+#    #+#             */
/*   Updated: 2025/05/02 16:52:26 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dest;

	tmp_src = (unsigned char *) src;
	tmp_dest = (unsigned char *) dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*(tmp_dest++) = *(tmp_src++);
	return (dest);
}
