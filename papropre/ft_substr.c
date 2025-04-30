/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:15:31 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/30 19:18:51 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char const *s);
char    *ft_strdup(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (start > slen || len == 0)
		return (ft_strdup(""));
	if (len > slen || start + len > slen)
		len = slen;
	result = malloc(sizeof(char) * (len + 1));
	if(!result)
		return (NULL);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	return(result);

}

int main()
{
	char const *s = "0123456789";
	unsigned int start = 9;
	size_t len = 10;

	printf("%s\n",ft_substr(s,start,len));
}
