/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orachouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:46:34 by orachouk          #+#    #+#             */
/*   Updated: 2018/10/08 19:51:58 by orachouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	while (*src)
	{
		if (*src == c)
			return ((char*)src);
		++src;
	}
	if (c == '\0')
		return ((char*)src);
	return (0);
}
