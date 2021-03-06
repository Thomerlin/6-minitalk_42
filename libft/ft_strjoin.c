/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:01:50 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/12/08 20:01:50 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	char	*ret;
	int		lens1;
	int		lens2;

	if (!s1 || !s2)
		return (ft_strdup(""));
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	strjoin = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!strjoin)
		return (0);
	ret = strjoin;
	while (lens1--)
		*strjoin++ = *s1++;
	while (lens2--)
		*strjoin++ = *s2++;
	*strjoin = 0;
	return (ret);
}
