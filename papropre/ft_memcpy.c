/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:24:00 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/29 16:13:20 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dest;

	tmp_src = (unsigned char *) src;
	tmp_dest = (unsigned char *) dest;
	while (n--)
		*(tmp_dest++) = *(tmp_src++);
	return (dest);
}

int main()
{
	char *src = NULL;
	char dest1[] = "oui chienx dorment";
	char dest2[] = "oui chienx dorment";


	ft_memcpy(dest1,src,0);
	memcpy(dest2,src,0);
	printf("mine %s\ntrue %s\n",dest1, dest2);
}
