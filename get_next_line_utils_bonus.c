/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanelas <acanelas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 02:07:38 by acanelas          #+#    #+#             */
/*   Updated: 2022/11/23 02:13:43 by acanelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	int		a;

	a = 0;
	while (s[a])
	{
		a++;
	}
	return (a);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t		a;
	size_t		b;
	char		*str;
	size_t		s1len;
	size_t		s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = ft_calloc((s1len + s2len + 1), sizeof(char));
	if (!str)
		return (NULL);
	a = 0;
	while (a < s1len)
	{
		str[a] = s1[a];
		a++;
	}
	b = 0;
	while (b < s2len)
		str[a++] = s2[b++];
	str[a] = '\0';
	free(s1);
	return (str);
}

int	ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return (1);
		s++;
	}
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

void	ft_bzero(void *s, size_t n)
{
	size_t		a;

	a = 0;
	while (n > a)
	{
		((char *)s)[a] = 0;
		a++;
	}
}
