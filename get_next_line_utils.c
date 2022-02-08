/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeser <aeser@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:24:50 by aeser             #+#    #+#             */
/*   Updated: 2022/02/08 12:53:29 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	char	*tmp;

	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!new_str)
		return (NULL);
	tmp = new_str;
	while (*s1)
		*tmp++ = *s1++;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = '\0';
	return (new_str);
}

void	*ft_calloc(size_t b_count, size_t b_size)
{
	void	*ret;
	size_t	count;

	ret = malloc(b_count * b_size);
	if (!ret)
		return (NULL);
	count = b_count * b_size;
	while (count-- > 0)
		*((unsigned char *)ret + count) = 0;
	return (ret);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
