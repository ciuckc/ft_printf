/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_len_to_char.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 18:38:40 by scristia      #+#    #+#                 */
/*   Updated: 2022/02/28 16:52:12 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len_to_char(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0' || str[len] != c)
	{
		len++;
	}
	return (len);
}
