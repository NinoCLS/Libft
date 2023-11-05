/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:52:03 by nino              #+#    #+#             */
/*   Updated: 2023/11/05 19:48:36 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  	// isalpha
	printf("\n---- isalpha ----\n");
	printf("5 isalpha : %d, real function : %d\n", ft_isalpha('9'), isalpha('9'));
	printf("O isalpha : %d, real function : %d\n", ft_isalpha('0'), isalpha('0'));
	printf("p isalpha : %d, real function : %d\n", ft_isalpha('z'), isalpha('z'));
	// isdigit
	printf("\n---- isdigit ----\n");
	printf("5 isdigit : %d, real function : %d\n", ft_isdigit('9'), isdigit('9'));
	printf("0 isdigit : %d, real function : %d\n", ft_isdigit('0'), isdigit('0'));
	printf("p isdigit : %d, real function : %d\n", ft_isdigit('z'), isdigit('z'));
	// isalnum
	printf("\n---- isalnum ----\n");
	printf("5 isalnum : %d, real function : %d\n", ft_isalnum('9'), isalnum('9'));
	printf("D isalnum : %d, real function : %d\n", ft_isalnum('B'), isalnum('B'));
	printf("! isalnum : %d, real function : %d\n", ft_isalnum('?'), isalnum('?'));
	printf("p isalnum : %d, real function : %d\n", ft_isalnum('z'), isalnum('z'));
	// isascii
	printf("\n---- isascii ----\n");
	printf("5 isascii : %d, real function : %d\n", ft_isascii('9'), isascii('9'));
	printf("¡ isascii : %d, real function : %d\n", ft_isascii(0xA1), isascii(0xA1));
	// isprint
	printf("\n---- isprint ----\n");
	printf("5 isprint : %d, real function : %d\n", ft_isprint('5'), isprint('5'));
	printf("¡ isprint : %d, real function : %d\n", ft_isprint(0xA1), isprint(0xA1));
	// memset
	printf("\n---- memset ----\n");
	char str_real_memset[50];
	strcpy(str_real_memset, "Hello 42");
	memset(str_real_memset, '-', 20);
	char str_test_memset[50];
	strcpy(str_test_memset, "Hello 42");
	ft_memset(str_test_memset, '-', 20);
	printf("\"Hello 42\" memset ('-', 20) : %s, real : %s\n", str_test_memset, str_real_memset);
	// bzero
	printf("\n---- bzero ----\n");
	char str_real_bzero[50];
	strcpy(str_real_bzero, "Hello 42");
	bzero(str_real_bzero, 6);
	char str_test_bzero[50];
	strcpy(str_test_bzero, "Hello 42");
	ft_bzero(str_test_bzero, 6);
	printf("\"Hello 42\" bzero (6) : %s seventh char : %c, real : %s seventh char : %c\n", str_test_bzero, str_test_bzero[6], str_real_bzero, str_real_bzero[6]);
}