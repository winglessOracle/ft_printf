/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 16:44:07 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/11/14 13:56:08 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ptr;
	unsigned int	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(sizeof(char) * len);
	if (ptr == 0)
		return (NULL);
	ft_strlcpy(ptr, s1, (len));
	ft_strlcat(ptr, s2, (len));
	return (ptr);
}
