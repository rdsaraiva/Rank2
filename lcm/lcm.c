unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	hcf_a;
	unsigned int	hcf_b;
	unsigned int	tmp;

	if (a == 0 || b == 0 || a > 2147483647 || b > 2147483647)
		return (0);
	hcf_a = a;
	hcf_b = b;
	while (hcf_b)
	{
		tmp = hcf_b;
		hcf_b = hcf_a % hcf_b;
		hcf_a = tmp;
	}
	return (a / hcf_a * b);
}
