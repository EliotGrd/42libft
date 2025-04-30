/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:23:05 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/28 19:35:05 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	return((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int main()
{
	size_t i = 9;
	const char *s1 = "les chatz";
	const char *s2 = "les chata";

	printf("%d\n", ft_strncmp(s1,s2,i));
	printf("%d\n", strncmp(s1,s2,i));
	printf("comparaison de \"test\\200\" et \"test\\O\" == %d\n", ft_strncmp("test\200", "test\0", 6));
	printf("comparaison de \"test\\200\" et \"test\\O\" == %d\n", strncmp("test\200", "test\0", 6));
}
