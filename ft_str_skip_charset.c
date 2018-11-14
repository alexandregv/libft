/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_skip_charset.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:24:18 by aguiot--          #+#    #+#             */
/*   Updated: 2018/11/14 15:53:22 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_str_skip_charset(char *str, char const *charset)
{
	char	*s;
	int		set_len;
	int		i;

	set_len = ft_strlen(charset);
	s = str;
	while (s && *s)
	{
		i = 0;
		while (charset[i])
		{
			if (*s == charset[i])
				break ;
			i++;
		}
		if (i == set_len)
			break ;
		s++;
	}
	ft_strcpy(str, s);
	return (s - str);
}
