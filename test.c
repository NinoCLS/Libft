// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   test.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: nclassea <nclassea@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/11/03 19:52:03 by nino              #+#    #+#             */
// /*   Updated: 2023/11/08 13:54:34 by nclassea         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"
// #include <ctype.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(void)
// {
// 	// isalpha
// 	printf("\n---- isalpha ----\n");
// 	printf("5 isalpha : %d, real function : %d\n", ft_isalpha('9'),
// 		isalpha('9'));
// 	printf("O isalpha : %d, real function : %d\n", ft_isalpha('0'),
// 		isalpha('0'));
// 	printf("p isalpha : %d, real function : %d\n", ft_isalpha('z'),
// 		isalpha('z'));
// 	// isdigit
// 	printf("\n---- isdigit ----\n");
// 	printf("5 isdigit : %d, real function : %d\n", ft_isdigit('9'),
// 		isdigit('9'));
// 	printf("0 isdigit : %d, real function : %d\n", ft_isdigit('0'),
// 		isdigit('0'));
// 	printf("p isdigit : %d, real function : %d\n", ft_isdigit('z'),
// 		isdigit('z'));
// 	// isalnum
// 	printf("\n---- isalnum ----\n");
// 	printf("5 isalnum : %d, real function : %d\n", ft_isalnum('9'),
// 		isalnum('9'));
// 	printf("D isalnum : %d, real function : %d\n", ft_isalnum('B'),
// 		isalnum('B'));
// 	printf("! isalnum : %d, real function : %d\n", ft_isalnum('?'),
// 		isalnum('?'));
// 	printf("p isalnum : %d, real function : %d\n", ft_isalnum('z'),
// 		isalnum('z'));
// 	// isascii
// 	printf("\n---- isascii ----\n");
// 	printf("5 isascii : %d, real function : %d\n", ft_isascii('9'),
// 		isascii('9'));
// 	printf("¡ isascii : %d, real function : %d\n", ft_isascii(0xA1),
// 		isascii(0xA1));
// 	// isprint
// 	printf("\n---- isprint ----\n");
// 	printf("5 isprint : %d, real function : %d\n", ft_isprint('5'),
// 		isprint('5'));
// 	printf("¡ isprint : %d, real function : %d\n", ft_isprint(0xA1),
// 		isprint(0xA1));
// 	// memset
// 	printf("\n---- memset ----\n");
// 	char str_real_memset[50];
// 	strcpy(str_real_memset, "Hello 42");
// 	memset(str_real_memset, '-', 20);
// 	char str_test_memset[50];
// 	strcpy(str_test_memset, "Hello 42");
// 	ft_memset(str_test_memset, '-', 20);
// 	printf("\"Hello 42\" memset ('-', 20) : %s, real : %s\n", str_test_memset,
// 		str_real_memset);
// 	// bzero
// 	printf("\n---- bzero ----\n");
// 	char str_real_bzero[50];
// 	strcpy(str_real_bzero, "Hello 42");
// 	bzero(str_real_bzero, 6);
// 	char str_test_bzero[50];
// 	strcpy(str_test_bzero, "Hello 42");
// 	ft_bzero(str_test_bzero, 6);
// 	printf("\"Hello 42\" bzero (6) : %s seventh char : %c, real :
// 				% s seventh char
// 			: %
// 					c\n ", str_test_bzero, str_test_bzero[6],
// 					str_real_bzero,
// 				str_real_bzero[6]);
// 	// memcpy
// 	printf("\n---- memcpy ----\n");
// 	char str_memcpy[] = "Hello 42";
// 	char dest_memcpy1[20];
// 	char dest_memcpy2[20];
// 	memcpy(dest_memcpy1, str_memcpy, ft_strlen(str_memcpy) + 1);
// 	printf("real : %s", dest_memcpy1);
// 	ft_memcpy(dest_memcpy2, str_memcpy, ft_strlen(str_memcpy) + 1);
// 	printf("\nft_memcpy : %s\n", dest_memcpy2);
// 	// memmove
// 	printf("\n---- memmove ----\n");
// 	char str_memmove1[] = "Hello 42";
// 	char str_memmove2[] = "Hello 42";
// 	memmove(str_memmove1 + 3, str_memmove1, 3);
// 	ft_memmove(str_memmove2 + 3, str_memmove2, 3);
// 	if (strcmp(str_memmove1, str_memmove2) == 0)
// 		printf("Same res");
// 	else
// 		printf("Error");
// }