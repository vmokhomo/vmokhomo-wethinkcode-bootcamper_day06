void ft_swap(int *a, int *b)
{
	int diff;
	diff = *a;
	a* = *b;
	b* = diff;

	ft_putchar(*a + '0');
	ft_putchar(*b + '0');
}
