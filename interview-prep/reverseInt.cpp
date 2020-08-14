// given a signed 32 bit number, the task is to
// reverse it while handeling overflow

#include<iostream>

int main()
{
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std:: cin >> n;
        bool negFlag = n < 0;
        n = abs(n);
        int rev = 0;
        while(n!=0){
            int pop = n % 10;
            n /= 10;
            if(rev == INT_MAX/10 || (rev == INT_MAX && pop >= 7)){
                rev = 0;
                break;
            }
            if(rev == INT_MIN /10 || (rev == INT_MIN && pop <= -8)){
                rev = 0;
                break;
            }
            rev = rev*10 + pop;
        }
        if(rev)
           rev = negFlag ? rev*-1 : rev;

        std::cout << rev << std::endl;

    }
    return 0;
}
