/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:21:25 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/30 15:08:53 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset (void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n > 0)
	{
		*tmp = (unsigned char) c;
		tmp++;
		n--;
	}
	return (s);
}


/*int main()
{
	char str[] = "les chats dorment fort";

	printf("old %s\n", str);
	ft_memset(str, 'l', 9);
	printf("new %s\n", str);
}*/
