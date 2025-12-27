#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
    // int rs, rf;
	// char *str = NULL;
	// char p = 'P';

	printf("%p", NULL);
	// // %c: normal e com '\0'
    // rs = printf("std:[%c]\n", 'A');
    // rf = ft_printf(" ft:[%c]\n", 'A');
    // printf("len std=%d | ft=%d\n\n", rs, rf);

    // rs = printf("std:[%c]\n", '\0');
    // rf = ft_printf(" ft:[%c]\n", '\0');
    // printf("len std=%d | ft=%d\n\n", rs, rf);

    // // %s: normal e NULL
    // rs = printf("std:[%s]\n", "Hello");
    // rf = ft_printf(" ft:[%s]\n", "Hello");
    // printf("len std=%d | ft=%d\n\n", rs, rf);

    // // ⚠️ no std o NULL pode dar warning com -Werror, então só testa no ft_printf
    // rf = ft_printf(" ft:[%s]\n", (char*)NULL);
    // printf("ft only (NULL str) len=%d\n\n", rf);

    // // %p: normal e NULL
    // int x = 42;
    // rs = printf("std:[%p]\n", &x);
    // rf = ft_printf(" ft:[%p]\n", &x);
    // printf("len std=%d | ft=%d\n\n", rs, rf);

    // rf = ft_printf(" ft:[%p]\n", (void*)NULL);
    // printf("ft only (NULL ptr) len=%d\n\n", rf);

    // // %d e %i: limites
    // rs = printf("std:[%d|%i]\n", INT_MIN, INT_MAX);
    // rf = ft_printf(" ft:[%d|%i]\n", INT_MIN, INT_MAX);
    // printf("len std=%d | ft=%d\n\n", rs, rf);

    // // %u: limites
    // rs = printf("std:[%u]\n", UINT_MAX);
    // rf = ft_printf(" ft:[%u]\n", UINT_MAX);
    // printf("len std=%d | ft=%d\n\n", rs, rf);

    // // %x e %X
    // rs = printf("std:[%x|%X]\n", 305441741, 305441741);
    // rf = ft_printf(" ft:[%x|%X]\n", 305441741, 305441741);
    // printf("len std=%d | ft=%d\n\n", rs, rf);

    // // %%
    // rs = printf("std:[%%]\n");
    // rf = ft_printf(" ft:[%%]\n");
    // printf("len std=%d | ft=%d\n\n", rs, rf);

	ft_printf(" %p %p ", 0, 0);
	ft_printf("\n\n");
	ft_printf(" NULL %s NULL ", NULL);
	ft_printf("\n\n");

    return 0;
}
