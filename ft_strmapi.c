#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if ((str = malloc((len + 1) * sizeof (char))) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
