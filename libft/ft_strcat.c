/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orachouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:08:23 by orachouk          #+#    #+#             */
/*   Updated: 2018/10/08 19:19:11 by orachouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dst[i] != '\0')
		++i;
	j = 0;
	while (src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		++j;
	}
	dst[i] = '\0';
	return (dst);
}
