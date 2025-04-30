/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:12:00 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/30 15:40:25 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*stmp;
	unsigned char	ctmp;

	stmp = (unsigned char *) s;
	ctmp = (unsigned char) c;
	while (i < n)
	{
		if (stmp[i] == ctmp)
			return ((void *)&stmp[i]);
		i++;
	}
	return (NULL);
}
