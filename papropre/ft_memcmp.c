/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:42:12 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/30 16:22:50 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1tmp;
	unsigned char	*s2tmp;

	s1tmp = (unsigned char *) s1;
	s2tmp = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*s1tmp != *s2tmp)
			return (*s1tmp - *s2tmp);
		s1tmp++;
		s2tmp++;
	}
	return (0);
}

/*
void run_memcmp_test(const void *s1, const void *s2, size_t n, int test_num)
{
    int std_result = memcmp(s1, s2, n);
    int ft_result = ft_memcmp(s1, s2, n);

    printf("Test %d:\n", test_num);
    printf("  s1 = \"%s\"\n", (const char *)s1);
    printf("  s2 = \"%s\"\n", (const char *)s2);
    printf("  n  = %zu\n", n);
    printf("  memcmp    = %d\n", std_result);
    printf("  ft_memcmp = %d\n", ft_result);

    if ((std_result == 0 && ft_result == 0) || (std_result < 0 && ft_result < 0) || (std_result > 0 && ft_result > 0))
        printf("  ✅ Match\n");
    else
        printf("  ❌ Mismatch\n");
    printf("\n");
}

int main(void)
{
    run_memcmp_test("abc", "abc", 3, 1);
    run_memcmp_test("xbc", "abc", 3, 2);
    run_memcmp_test("axc", "abc", 3, 3);
    run_memcmp_test("abx", "abc", 3, 4);
    run_memcmp_test("abc", "abx", 2, 5);
    run_memcmp_test("abc", "xyz", 0, 6);
    run_memcmp_test("", "", 1, 7);
    run_memcmp_test("", "a", 1, 8);
    run_memcmp_test("a", "", 1, 9);

    // caractères signés
    char a[] = {0, -1, 1};
    char b[] = {0, 1, 1};
    run_memcmp_test(a, b, 3, 10);

    // blocs binaires
    char bin1[] = {1, 2, 3, 4, 5};
    char bin2[] = {1, 2, 3, 4, 6};
    run_memcmp_test(bin1, bin2, 5, 11);

    return 0;
}
*/
