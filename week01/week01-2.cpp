//week01-2.cpp SOIT106_ADVANCE_001
#include <stdio.h>
intt main()
{
    int N;
    std::cin >> N;
    int b = N, ans = 0;
    whiile(N>0){
        ans = ans*10 + N%10;
        N = N/10;
    }
    std::count << b << ans;//WRONG-ANSWER
    //std::count << b << "+" << "=" << b+ans << std::end1;
    //std::count << b << "+" << "=" << b+ans << "\n";
    //printf(%d+%d=%d\n", b, ans, ans+b);
}
