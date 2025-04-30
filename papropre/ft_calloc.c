/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 01:18:22 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/30 15:28:42 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <limits.h>

void	*ft_calloc(size_t elem, size_t size)
{
	void	*tmp;

	tmp = malloc(elem * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, elem * size);
	return (tmp);
}

/*// Utilitaire pour afficher le contenu brut de la mémoire (en hexa)
void print_bytes(void *ptr, size_t size)
{
    unsigned char *bytes = (unsigned char *)ptr;
    for (size_t i = 0; i < size; i++)
        printf("%02x ", bytes[i]);
    printf("\n");
}

// Compare deux pointeurs (valeurs, contenu et gestion NULL)
void run_test(size_t count, size_t size, int test_num)
{
    void *ref = calloc(count, size);
    void *mine = ft_calloc(count, size);

    int passed = 1;

    if (!ref && !mine)
    {
        printf("Test %d: ✅ NULL (both)\n", test_num);
        return;
    }

    if ((ref == NULL) != (mine == NULL))
    {
        printf("Test %d: ❌ One NULL, one not\n", test_num);
        passed = 0;
    }
    else if (ref && mine && memcmp(ref, mine, count * size) != 0)
    {
        printf("Test %d: ❌ Memory content mismatch\n", test_num);
        printf("  Expected: ");
        print_bytes(ref, count * size);
        printf("  Got     : ");
        print_bytes(mine, count * size);
        passed = 0;
    }

    if (passed)
        printf("Test %d: ✅ Passed\n", test_num);

    free(ref);
    free(mine);
}

int main(void)
{
    run_test(0, 0, 1);
    run_test(0, 1, 2);
    run_test(1, 0, 3);
    run_test(1, 1, 4);
    run_test(3, sizeof(int), 5);
    run_test(5, 7, 6);

    // Test avec gros tableau (mais pas trop, pour ne pas crasher)
    run_test(1024, 1024, 7);

    // Test overflow
    run_test(SIZE_MAX, 2, 8);           // devrait renvoyer NULL
    run_test(SIZE_MAX / 16, 32, 9);     // overflow (size * count trop grand)

    return 0;
}*/
