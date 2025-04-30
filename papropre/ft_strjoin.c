/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:06:56 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/30 18:29:38 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	nstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!nstr)
		return (NULL);
	while (s1[i])
	{
		nstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		nstr[i] = s2[j];
		j++;
		i++;
	}
	nstr[i] = 0;
	return (nstr);
}
