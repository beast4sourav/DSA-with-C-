#include <bits/stdc++.h>

int countNum1(int n)
{
    int count = (int) (log10(n) + 1);
    return count;
}

//second way to count the number
int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        count = count + 1;
        n = n / 10;
    }
    return count;
}

//time complexity is o(log10(n))