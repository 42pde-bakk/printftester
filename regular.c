/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   regular.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/19 17:42:53 by pde-bakk      #+#    #+#                 */
/*   Updated: 2019/12/20 14:55:37 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <locale.h>
#include <stdio.h>

int	main(void)
{
	char	s1[] = "Why you so scared of ultimate.c?";
	char	s2[] = "Smaller";
	char	s3[] = "String3";
	char	c1 = '&';
	char	c2 = 'T';
	char	c3 = '%';

	printf("\033[1;37m");
	printf("First testing everything without flags\n");
	printf("\033[1;31m");
	
	ft_printf(" <- %d\n", ft_printf("%d, %i, %u, %x, %X, %c, %s, %p, %%\n", 800, 799, -800, 1600, 1600, '&', s1, &s1));
	printf(" <- %d\n", printf("%d, %i, %u, %x, %X, %c, %s, %p, %%\n", 800, 799, -800, 1600, 1600, '&', s1, &s1));
	printf("\033[0;32mStrings, chars and pointers\n");
	ft_printf(" <- %d\n", ft_printf("%-10s, %10s, %.5s, %.s, %*s, %.*s, %*.*s\n", s2, s3, s2, s3, -8, s2, -3, s3, -5, -3, s2));
	printf(" <- %d\n", printf("%-10s, %10s, %.5s, %.s, %*s, %.*s, %*.*s\n", s2, s3, s2, s3, -8, s2, -3, s3, -5, -3, s2));
	ft_printf(" <- %d\n", ft_printf("%s, %8s, %-10s, %*s\n", NULL, NULL, NULL, 2, NULL));
	printf(" <- %d\n", printf("%s, %8s, %-10s, %*s\n", NULL, NULL, NULL, 2, NULL));
	ft_printf(" <- %d\n", ft_printf("%-3c, %4c, %.c, %*c, %*c\n", c1, c2, c3, -8, c1, -3, c1));
	printf(" <- %d\n", printf("%-3c, %4c, %.c, %*c, %*c\n", c1, c2, c3, -8, c1, -3, c1));
	ft_printf(" <- %d\n", ft_printf("%20p, %*p, %-20p, %30p\n", &s1, 18, &s2, &s3, &c1));
	printf(" <- %d\n\n", printf("%20p, %*p, %-20p, %30p\n", &s1, 18, &s2, &s3, &c1));

	printf("\033[0;32mStrings, chars and pointers\n");
	ft_printf(" <- %d\n", ft_printf("%5i, %.5i, %*d, %-6d\n", 0, -89, -9, 0, 67));
	printf(" <- %d\n", printf("%5i, %.5i, %*d, %-6d\n", 0, -89, -9, 0, 67));
}
