void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n)
{
	unsigned char	*ptrd;
	const char		*ptrs;

	ptrd = dest;
	ptrs = src;
	while (n > 0 && *ptrs != c)
	{
		*ptrd = *ptrs;
		ptrd++;
		ptrs++;
		n--;
	}
	return (dest);
}