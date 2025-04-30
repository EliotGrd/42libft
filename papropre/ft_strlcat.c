/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 01:43:09 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/30 14:50:48 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (size + srclen);
	while (src[i] && dstlen + i < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}

int main()
{
	char dst[14] = "a";
	char dst1[14] = "a";
	char *src =  "lorem ipsum dolor sit amet";
	size_t i = 15;

	printf("%zu\n", ft_strlcat(dst1,src,i));
	printf("%zu\n", strlcat(dst,src,i));
	printf("%s\n", dst1);
	printf("%s\n", dst);
}

/*void run_test(const char *initial_dst, const char *src, size_t size, int test_number)
{
    char dst1[100];
    char dst2[100];
    size_t ret1, ret2;

    // Préparer les buffers
    memset(dst1, 0, 100);
    memset(dst2, 0, 100);
    strncpy(dst1, initial_dst, 99);
    strncpy(dst2, initial_dst, 99);

    // Appel des fonctions
    ret1 = ft_strlcat(dst1, src, size);
    ret2 = strlcat(dst2, src, size);

    // Affichage
    printf("Test %d:\n", test_number);
    printf("  ft_strlcat: ret = %zu, dst = \"%s\"\n", ret1, dst1);
    printf("  strlcat   : ret = %zu, dst = \"%s\"\n", ret2, dst2);
    if (ret1 != ret2 || strcmp(dst1, dst2) != 0)
        printf("  ❌ Test %d failed!\n\n", test_number);
    else
        printf("  ✅ Test %d OK!\n\n", test_number);
}

int main(void)
{
    // Cas basiques
    run_test("oui", " oui baguette", 18, 1);
    run_test("bonjour", "", 20, 2);
    run_test("", "salut", 10, 3);

    // Taille pile assez
    run_test("abc", "def", 7, 4);  // abcdef + \0
    run_test("abc", "def", 6, 5);  // abcde + \0

    // Pas assez de place
    run_test("abc", "def", 5, 6);  // abc + d + \0
    run_test("abc", "def", 4, 7);  // abc + \0

    // Buffer de taille zéro
    run_test("abc", "def", 0, 8);

    // Buffer plus petit que strlen(dst)
    run_test("bonjour", "monde", 3, 9);

    // Buffer pile à la taille de dst
    run_test("bonjour", "monde", 7, 10);

    // src vide
    run_test("bonjour", "", 10, 11);

    // dst vide, size petit
    run_test("", "123456789", 5, 12);

    // Très long src
    run_test("abc", "abcdefghijklmnopqrstuvwxyz", 10, 13);

    // Très long dst et src
    run_test("lorem ipsum dolor ", "sit amet consectetur", 50, 14);

    return 0;
}*/
