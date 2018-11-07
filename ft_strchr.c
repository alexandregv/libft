/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:57:06 by aguiot--          #+#    #+#             */
/*   Updated: 2018/11/07 19:33:09 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(char const *s, int c)
{
	while (*s && *s != c)
		s++;
	if (*s != c)
		return (NULL);
	return ((char*)s);
}
