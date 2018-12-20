/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orachouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:52:18 by orachouk          #+#    #+#             */
/*   Updated: 2018/10/08 17:07:20 by orachouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*ptr1;
	const unsigned char		*ptr2;

	ptr1 = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	i = 0;
	if (ptr2 < ptr1)
		while (++i <= n)
			ptr1[n - i] = ptr2[n - i];
	else
		while (n-- > 0)
			*(ptr1++) = *(ptr2++);
	return (dst);
}
