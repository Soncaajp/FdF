/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmelda <fmelda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:56:33 by fmelda            #+#    #+#             */
/*   Updated: 2019/05/07 12:26:43 by fmelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (!size)
		return (NULL);
	str = (char*)malloc(sizeof(*str) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_memset(str, '\0', size + 1);
	return (str);
}
