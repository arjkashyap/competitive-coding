#include<iostream>
#include<stack>

int stackMax(std::stack<int>& s)
{
    int max = 0;
    std::stack<int> aux;
    while(s.empty() == false)
    {
        max = std::max(s.top(), max);
        aux.push(s.top());
        s.pop();
    }
    while(aux.empty() == false)
    {
        s.push(aux.top());
        aux.pop();
    }
    return max;
}

int main()
{
    int n;
    std::cin >> n;
    std::stack<int> s;
    int max = 0;
    while(n--)
    {
        int q;
        std::cin >> q;
        switch(q)
        {
            case 1:
                int a;
                std::cin >> a;
                max = std::max(a, max);
                s.push(a);
                break;
            case 2:
                int b;
                b = s.top();
                s.pop();
                if(b == max)
                    max = stackMax(s);
                break;
            case 3:
                std::cout << max << std::endl;
                break;
            default:
                break;
        }
    }
    return 0;
}
