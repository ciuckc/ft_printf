/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/15 18:56:41 by scristia      #+#    #+#                 */
/*   Updated: 2022/04/25 20:27:08 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_flag(const char *str, va_list *ap, int *bytes)
{
	char					*flags;
	size_t					i;
	static void				(*ft_ptr[9])(va_list *, int *) = {
		ft_percent_flag, ft_hexupp_flag, ft_char_flag, ft_decimal_flag, \
		ft_decimal_flag, ft_ptr_flag, ft_str_flag, ft_uint_flag, \
		ft_hexlow_flag
	};

	i = 0;
	flags = "%Xcdipsux";
	while (flags[i] != *str && flags[i] != '\0')
		i++;
	if (flags[i] == '\0')
		return ;
	(*ft_ptr[i])(ap, bytes);
}

int	ft_printf(const char *format_string, ...)
{
	va_list				arg_pointer;
	int					bytes_wrote;

	bytes_wrote = 0;
	va_start(arg_pointer, format_string);
	while (*format_string != '\0')
	{
		if (*format_string == '%')
		{
			ft_convert_flag(format_string + 1, &arg_pointer, &bytes_wrote);
			format_string++;
		}
		else
			bytes_wrote += write (1, format_string, 1);
		format_string++;
	}
	va_end(arg_pointer);
	return (bytes_wrote);
}
