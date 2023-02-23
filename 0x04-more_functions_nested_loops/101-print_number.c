void print_number(int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    unsigned int n1;

    if (n < 0)
    {
        n1 = -n;
        _putchar('-');
    } else
    {
        n1 = n;
    }

    if (n1 / 10)
    {
        print_number(n1 / 10);
    }

    _putchar((n1 % 10) + '0');
}
