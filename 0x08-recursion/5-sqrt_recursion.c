/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */

int helper(int n, int i)
{
    if (i * i == n)
        return i;
    else if (i * i > n)
        return -1;
    else
        return helper(n, i + 1);
}

int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    else
        return helper(n, 0);
}
