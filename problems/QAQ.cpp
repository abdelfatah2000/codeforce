#include <iostream>
#include <string>
 
int main()
{
    int count = 0;
    std::string s;
    std::cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            for (int k = j + 1; k < s.size(); k++)
            {
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
                {
                    count++;
                }
            }
        }
    }
    std::cout << count << std::endl;
}