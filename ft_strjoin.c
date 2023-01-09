/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:16:02 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/09 19:40:27 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int len1;
    int len2;
    char *str;
    int i;

    i = 0;
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    if (!s1 || !s2)
        return (NULL);
    str = (char *)malloc(sizeof(*str) * (len1 + len2 + 1));
    if (!(str = (char *)malloc(sizeof(*str) * (len1 + len2 + 1))))
    {
        return (NULL);
    }
    while (s1[i] != '\0')
        str[i] = s1[i];
        i++;
    while (s2[i] != '\0')
        str[i] = s2[i];
        i++;
    str[i] = '\0';
    return (str); 
}

 