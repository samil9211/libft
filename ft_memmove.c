/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saekin <saekin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:43:33 by saekin            #+#    #+#             */
/*   Updated: 2025/06/01 19:43:37 by saekin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst2;
	const unsigned char	*src2;

	dst2 = (unsigned char *)dst;
	src2 = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	else if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len--)
			dst2[len] = src2[len];
	}
	return (dst);
}
