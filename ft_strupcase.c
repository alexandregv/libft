/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:31:36 by aguiot--          #+#    #+#             */
/*   Updated: 2018/11/12 14:33:36 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strupcase(char *s)
{
	char	*p;

	p = s;
	while (p && *p)
	{
		if (ft_islower(*p))
			*p -= 32;
		p++;
	}
	return (s);
}
