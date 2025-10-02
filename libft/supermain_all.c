#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
	printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
	printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));
	printf("ft_isascii(127): %d\n", ft_isascii(127));
	printf("ft_isprint(' '): %d\n", ft_isprint(' '));
	printf("ft_strlen('Hello'): %zu\n", ft_strlen("Hello"));
	char buf[10] = "abcdefghi";
	ft_memset(buf, 'X', 5);
	printf("ft_memset: %s\n", buf);
	ft_bzero(buf, 3);
	printf("ft_bzero: %02x %02x %02x\n", buf[0], buf[1], buf[2]);
	char src[10] = "123456789";
	ft_memcpy(buf, src, 4);
	printf("ft_memcpy: %s\n", buf);
	ft_memmove(buf+2, buf, 5);
	printf("ft_memmove: %s\n", buf);
	char dst1[10];
	size_t lcpy = ft_strlcpy(dst1, "hola42", 10);
	printf("ft_strlcpy: %s (len: %zu)\n", dst1, lcpy);
	char dst2[15] = "abc";
	size_t lcat = ft_strlcat(dst2, "defghijk", 15);
	printf("ft_strlcat: %s (len: %zu)\n", dst2, lcat);
	printf("ft_toupper('a'): %c\n", ft_toupper('a'));
	printf("ft_tolower('A'): %c\n", ft_tolower('A'));
	printf("ft_strchr('Hello', 'l'): %s\n", ft_strchr("Hello", 'l'));
	printf("ft_strrchr('Hello', 'l'): %s\n", ft_strrchr("Hello", 'l'));
	printf("ft_strncmp('abc', 'abd', 2): %d\n", ft_strncmp("abc", "abd", 2));
	printf("ft_memchr('abcde', 'c', 5): %s\n", (char*)ft_memchr("abcde", 'c', 5));
	printf("ft_memcmp('abc', 'abd', 2): %d\n", ft_memcmp("abc", "abd", 2));
	printf("ft_strnstr('42lib42', 'lib', 7): %s\n", ft_strnstr("42lib42", "lib", 7));
	printf("ft_atoi('-42'): %d\n", ft_atoi("-42"));
	char *dup = ft_strdup("duplica esto");
	printf("ft_strdup: %s\n", dup);
	free(dup);
	int *arr = (int *)ft_calloc(4, sizeof(int));
	printf("ft_calloc: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
	free(arr);
	return 0;
}
