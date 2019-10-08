int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	
	unsigned char	*ptrd;
	const char		*ptrs;
	int len;

	ptrd = dest;
	ptrs = src;
	if (dest > src)
	{
		len = ft_strlen(ptrs);
		len = len - (len - n);
		while (len >= 0)
		{
			*(ptrd + len) = *(ptrs + len);
			len--;
		}
	}
	else
	{
		while (n > 0)
		{
			*ptrd = *ptrs;
			ptrd++;
			ptrs++;
		}
	}
	return (dest);
}