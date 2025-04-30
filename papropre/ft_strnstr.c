/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 12:01:25 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/26 12:45:32 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if(needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && needle[j] && (i + j) < len)
		{
			if(needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

#include <bsd/string.h>
int main()
{
	const char *h = "qqqqqqqqabc";
	const char *n = "abcddd";
	size_t len  = 10;

	printf("%s\n",ft_strnstr(h,n,len));
	printf("%s\n",strnstr(h,n,len));
}
