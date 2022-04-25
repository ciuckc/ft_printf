/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hex_conversion.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/13 16:18:57 by scristia      #+#    #+#                 */
/*   Updated: 2022/04/25 20:27:08 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_reverse(char *hex, int i)
{
	while (i >= 0)
	{
		write(1, &hex[i], 1);
		i--;
	}
}

void	ft_ptr_flag(va_list *ap, int *byte_wrote)
{
	unsigned long long	ptr;
	char				*dictionary;
	char				hex[17];
	size_t				i;

	ptr = va_arg(*ap, unsigned long long);
	ft_bzero(hex, 9);
	dictionary = "0123456789abcdef";
	i = 0;
	*byte_wrote += write(1, "0x", 2);
	if (ptr == 0)
	{
		write (1, "0", 1);
		*byte_wrote += 1;
	}
	while (ptr)
	{
		hex[i] = dictionary[ptr % 16];
		ptr /= 16;
		i++;
	}
	*byte_wrote += i;
	ft_print_reverse(hex, i - 1);
}

void	ft_hexupp_flag(va_list *ap, int *byte_wrote)
{
	unsigned int	number;
	char			*dictionary;
	char			hex[9];
	size_t			i;

	number = va_arg(*ap, unsigned int);
	ft_bzero(hex, 9);
	dictionary = "0123456789ABCDEF";
	i = 0;
	if (number == 0)
	{
		write (1, "0", 1);
		*byte_wrote += 1;
		return ;
	}
	while (number)
	{
		hex[i] = dictionary[number % 16];
		number /= 16;
		i++;
	}
	*byte_wrote += i;
	ft_print_reverse(hex, i - 1);
}

void	ft_hexlow_flag(va_list *ap, int *byte_wrote)
{
	unsigned int	number;
	char			*dictionary;
	char			hex[9];
	size_t			i;

	number = va_arg(*ap, unsigned int);
	ft_bzero(hex, 9);
	dictionary = "0123456789abcdef";
	i = 0;
	if (number == 0)
	{
		write (1, "0", 1);
		*byte_wrote += 1;
		return ;
	}
	while (number)
	{
		hex[i] = dictionary[number % 16];
		number /= 16;
		i++;
	}
	*byte_wrote += i;
	ft_print_reverse(hex, i - 1);
}
