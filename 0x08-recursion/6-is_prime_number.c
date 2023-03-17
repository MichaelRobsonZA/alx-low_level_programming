/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1) /* 0 and 1 are not prime */
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - recursive helper function for is_prime_number
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_helper(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n) /* no need to check past the square root of n */
		return (1);
	return (is_prime_helper(n, i + 1));
}

