/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:51:21 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/20 15:54:03 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	len_s;

	len_s = 0;
	while (s[len_s])
		len_s++;
	if (len_s - start < len)
		len = len_s - start;
	if (!s || len_s < start)
	{
		ptr = ft_calloc(1, sizeof(char));
		return (ptr);
	}
	ptr = ft_calloc(sizeof(char), (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
