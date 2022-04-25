/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/15 18:56:39 by scristia      #+#    #+#                 */
/*   Updated: 2022/04/25 20:27:08 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *format_string, ...);

void	ft_char_flag(va_list *ap, int *byte_wrote);

void	ft_str_flag(va_list *ap, int *byte_wrote);

void	ft_percent_flag(va_list *ap, int *byte_wrote);

void	ft_hexlow_flag(va_list *ap, int *byte_wrote);

void	ft_hexupp_flag(va_list *ap, int *byte_wrote);

void	ft_decimal_flag(va_list *ap, int *byte_wrote);

void	ft_uint_flag(va_list *ap, int *byte_wrote);

void	ft_ptr_flag(va_list *ap, int *byte_wrote);

#endif
