/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_number_conversion.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/13 16:24:11 by scristia      #+#    #+#                 */
/*   Updated: 2022/04/25 20:27:08 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_decimal_flag(va_list *ap, int *byte_wrote)
{
	int		number;
	size_t	len;

	number = va_arg(*ap, int);
	ft_putnbr_fd(number, 1);
	len = ft_number_of_digits(number, 10);
	*byte_wrote += len;
}

static void	ft_put_uint(unsigned int number)
{
	unsigned long	i;

	i = (unsigned long) number;
	if (i <= 9)
		ft_putchar_fd(i % 10 + '0', 1);
	else if (i > 9)
	{
		ft_put_uint(i / 10);
		ft_put_uint(i % 10);
	}
}

void	ft_uint_flag(va_list *ap, int *byte_wrote)
{
	size_t			len;
	unsigned int	number;

	number = va_arg(*ap, unsigned int);
	ft_put_uint(number);
	len = ft_number_of_digits(number, 10);
	*byte_wrote += len;
}
