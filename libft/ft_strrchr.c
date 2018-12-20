/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orachouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 20:44:09 by orachouk          #+#    #+#             */
/*   Updated: 2018/10/08 21:02:20 by orachouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_pos;

	last_pos = (0);
	while (*str)
	{
		if (*str == c)
			last_pos = (char*)str;
		++str;
	}
	if (last_pos)
		return (last_pos);
	if (c == '\0')
		return ((char*)str);
	return (0);
}
