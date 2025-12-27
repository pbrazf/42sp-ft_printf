#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
	int           ret_std, ret_ft;
	char          ch = 'A';
	char         *str = "Pedro Pedro";
	int           n = -2147483648;         // INT_MIN
	int           z = 0;
	unsigned int  u = 4294967295u;         // UINT_MAX
	void         *ptr = &n;

	puts("=== %c ===");
	ret_std = printf("std: [%c]\n", ch);
	ret_ft  = ft_printf(" ft: [%c]\n", ch);
	printf("len std=%d | len ft=%d\n\n", ret_std, ret_ft);

	puts("=== %s ===");
	ret_std = printf("std: [%s]\n", str);
	ret_ft  = ft_printf(" ft: [%s]\n", str);
	printf("len std=%d | len ft=%d\n\n", ret_std, ret_ft);

	puts("=== %p ===");
	ret_std = printf("std: [%p]\n", ptr);
	ret_ft  = ft_printf(" ft: [%p]\n", ptr);
	printf("len std=%d | len ft=%d\n\n", ret_std, ret_ft);

	puts("=== %d ===");
	ret_std = printf("std: [%d] [%d]\n", n, z);
	ret_ft  = ft_printf(" ft: [%d] [%d]\n", n, z);
	printf("len std=%d | len ft=%d\n\n", ret_std, ret_ft);

	puts("=== %i ===");
	ret_std = printf("std: [%i] [%i]\n", 42, -42);
	ret_ft  = ft_printf(" ft: [%i] [%i]\n", 42, -42);
	printf("len std=%d | len ft=%d\n\n", ret_std, ret_ft);

	puts("=== %u ===");
	ret_std = printf("std: [%u] [%u]\n", u, (unsigned)z);
	ret_ft  = ft_printf(" ft: [%u] [%u]\n", u, (unsigned)z);
	printf("len std=%d | len ft=%d\n\n", ret_std, ret_ft);

	puts("=== %x ===");
	ret_std = printf("std: [%x] [%x]\n", 305441741, z);      // 0x1234ABCD
	ret_ft  = ft_printf(" ft: [%x] [%x]\n", 305441741, z);
	printf("len std=%d | len ft=%d\n\n", ret_std, ret_ft);

	puts("=== %X ===");
	ret_std = printf("std: [%X] [%X]\n", 305441741, z);
	ret_ft  = ft_printf(" ft: [%X] [%X]\n", 305441741, z);
	printf("len std=%d | len ft=%d\n\n", ret_std, ret_ft);

	puts("=== %% ===");
	ret_std = printf("std: [%%]\n");
	ret_ft  = ft_printf(" ft: [%%]\n");
	printf("len std=%d | len ft=%d\n\n", ret_std, ret_ft);

	printf("\n\n=== %%s ===\n\n");
	ret_std = printf("std: Olá, teste %s\n", "Pedro Pedro");
	ret_ft  = ft_printf(" ft: Olá, teste %s\n", "Pedro Pedro");
	printf("len std=%d | len ft=%d\n\n", ret_std, ret_ft);

	return 0;
}
