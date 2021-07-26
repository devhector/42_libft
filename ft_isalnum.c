int    ft_isalnum(int	c)
{
	return (c >= 'a' && c <= 'z') 
	|| (c >= 'A' && c <= 'Z') 
	|| (c >= '0' && c <= '9');
}
