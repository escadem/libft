#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i ++;
	return (i);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	len;
	char	*temp;

	temp = malloc (ft_strlen(src) * sizeof(char));

	

}

int main(void)
{

}