#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
    size_t	lentotal;
    char	*join;

    if (!s1)
	{
        s1 = (char *)malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
    if (!s2)
        return (NULL);
    lentotal = ft_strlen(s1, 1) + ft_strlen(s2, 1);
    join = (char *)malloc(lentotal + 1);
    if (!join)
		return (NULL);
	ft_strlcpy(join, s1, ft_strlen(s1, 1) + 1);
	ft_strlcpy(&join[ft_strlen(s1, 1)], s2, (ft_strlen(s2, 1) + 1));
	free(s1);
	return (join);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	i = -1;
	dup = (char *)malloc(ft_strlen(s, 1) + 1);
	if (dup == NULL)
		return (NULL);
	while (s[++i])
		dup[i] = s[i];
	dup[i] = s[i];
	return (dup);
}

size_t	ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	count;
	size_t	len;

	len = ft_strlen(src, 1);
	count = 0;
	if (!size)
		return (len);
	while (src[count] && count < (size - 1))
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (len);
}

char    *ft_strchr(char const *s, int c)
{
    char    find;
    int         i;

    find = (unsigned char)c;
    i = 0;
	if (!s)
		return (NULL);
    while(s[i])
    {
        if (s[i] == find)
            return ((char *)s + i);
        i++;
    }
    if (s[i] == find)
        return ((char *)s + i);
    return (NULL);
}

size_t ft_strlen(char const *s, int version)
{
    size_t i;

    i = 0;
	if (version == 1)
	{
    	while (s[i])
        	i++;
    	return (i);
	}
	else if (version == 2)
	{
		while (s[i] != '\n' && s[i])
			i++;
		return (i);
	}
	return (i);
}