class Solution
{
public:
    int romanToInt(string s)
    {
        int num = 0, r = 0;
        int i = 0, n = s.length();

        while (i < n)
        {
            int current = value(s[i]);
            int next;
            if ((i + 1) == n)
            {
                next = 0;
            }
            else
            {
                next = value(s[i + 1]);
            }
            if (current < next)
            {
                r = next - current;
                num += r;
                r = 0;
                i = i + 2;
            }
            else
            {
                num += current;
                i++;
            }
        }
        return num;
    }
    int value(char r)
    {
        if (r == 'I')
        {
            return (1);
        }
        else if (r == 'V')
        {
            return (5);
        }
        else if (r == 'X')
        {
            return (10);
        }
        else if (r == 'L')
        {
            return (50);
        }
        else if (r == 'C')
        {
            return (100);
        }
        else if (r == 'D')
        {
            return (500);
        }

        else
        {
            return (1000);
        }
    }
};