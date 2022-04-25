/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_character_conversion.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/13 16:15:54 by scristia      #+#    #+#                 */
/*   Updated: 2022/04/25 20:27:55 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char_flag(va_list *ap, int *byte_wrote)
{
	char	flag;

	flag = va_arg(*ap, int);
	*byte_wrote += write(1, &flag, 1);
}

void	ft_str_flag(va_list *ap, int *byte_wrote)
{
	char	*str;

	str = va_arg(*ap, char *);
	if (str == NULL)
	{
		str = "(null)";
		*byte_wrote += write(1, str, 6);
		return ;
	}
	*byte_wrote += write(1, str, ft_strlen(str));
}

void	ft_percent_flag(va_list *ap, int *byte_wrote)
{
	(void) ap;
	*byte_wrote += write(1, "%", 1);
}
