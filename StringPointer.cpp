#include <iostream>

bool check_word(const char*, const char*);

int main()
{
    const char* a = "Hello World!";
    const char* b = "Wor";
    const char* c = "banana";
    std::cout << "A: " << a << std::endl;
    std::cout << "B: " << b << std::endl;
    std::cout << "C: " << c << std::endl;
    
    std::cout << "B in A: " << std::endl;
    if (check_word(a, b))
    {
        std::cout << "Found!" << std::endl;
    }
    else
    {
        std::cout << "Not Found!" << std::endl;
    }
    
    std::cout << "C in A: " << std::endl;
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
    int la = 0;
    for (; *(a + la) != '\0'; la++);
    int lb = 0;
    for(; *(b + lb) != '\0'; lb++);

    bool found = false;
    for (int startPos = 0; startPos + lb <= la;
        startPos++)
    {
        bool match = true;
        for (int i = 0; *(b+i) != '\0'; i++)
        {
            if (*(b+i) != *(a+i + startPos))
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
