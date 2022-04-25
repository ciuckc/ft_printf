/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_number_of_digits.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/13 16:49:10 by scristia      #+#    #+#                 */
/*   Updated: 2022/04/25 17:56:57 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

size_t	ft_number_of_digits(long long number, int base)
{
	size_t	len;

	len = 0;
	if (number <= 0)
	{
		number *= -1;
		len++;
	}
	while (number != 0)
	{
		number /= base;
		len++;
	}
	return (len);
}
