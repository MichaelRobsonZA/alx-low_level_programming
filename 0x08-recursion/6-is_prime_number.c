/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime(int n)
{
	int i;
	for (i = 2; i <= n / 2; ++i)
{
	if (n % i == 0)
{
	return (0);
}
}
	return (1);
}
