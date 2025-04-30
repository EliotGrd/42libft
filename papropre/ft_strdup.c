/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 12:46:13 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/30 17:56:37 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int	i;
	char *nstr;

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

/*
#include <stdio.h>
#include <string.h>
int main()
{
	const char *s = "chats";

	printf("%s\n", strdup(s));
	printf("%s\n", ft_strdup(s));
}
*/
