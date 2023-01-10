/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 04:44:41 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/10 17:35:23 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s) + 1;
	new = (char *)malloc(sizeof(*new) * len);
	if (!new || !s)
		return (NULL);
	return ((char *)ft_memcpy(new, s, len));
}
