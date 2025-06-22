/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saekin <saekin@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 11:55:18 by saekin            #+#    #+#             */
/*   Updated: 2025/06/03 12:05:15 by saekin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;
	size_t	len;

	len = ft_strlen(str) + 1;
	str2 = (char *)malloc(len);
	if ((str2) == NULL)
		return (NULL);
	ft_memcpy(str2, str, len);
	return (str2);
}
