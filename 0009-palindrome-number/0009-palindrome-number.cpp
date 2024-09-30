class Solution
{
public:
    bool isPalindrome(int x)
    {
        long tar = x;
        long rev = 0;
        if(x<0)
        {
            return false;
        }
        else{
        while (x != 0)
        {
            int digit=x%10;
            rev =rev*10+digit;
            x /= 10;
        }
        return rev==tar;
        }
    }
};