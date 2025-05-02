/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 12:46:13 by egiraud           #+#    #+#             */
/*   Updated: 2025/05/01 19:31:09 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*nstr;

	i = 0;
	while (s[i])
		i++;
	nstr = malloc(sizeof(char) * (i + 1));
	if (!nstr)
		return (0);
	i = 0;
	while (s[i])
	{
		nstr[i] = s[i];
		i++;
	}
	nstr[i] = '\0';
	return ((char *)nstr);
}
