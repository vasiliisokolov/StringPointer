#include <iostream>

bool check_word(const char*, const char*);

int main()
{
    const char* a = "Hello World!";
    const char* b = "vor";
    const char* c = "banana";
    if (check_word(a, b))
    {
        std::cout << "Found!" << std::endl;
    }
    else
    {
        std::cout << "Not Found!" << std::endl;
    }
    
    if (check_word(a, c))
    {
        std::cout << "Found!" << std::endl;
    }
    else
    {
        std::cout << "Not Found!" << std::endl;
    }
}

bool check_word(const char* a, const char* b)
{
    std::string c = a;
    std::string d = b;
    bool found = false;
    for (int startPos = 0; startPos + d.length() <= c.length();
        startPos++)
    {
        bool match = true;
        for (int i = 0; i < d.length(); i++)
        {
            if (d[i] != c[i + startPos])
            {
                match = false;
                break;
            }

        }
        if (match)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        return true;
    }
    else
    {
        return false;

    }
    
}
