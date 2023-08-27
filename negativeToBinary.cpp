#include <iostream>
using namespace std;

int main()
{
    int num = -6;
    
    int neg_number = ~num + 1; // Took 2's compliment of number is 6

    // `result` stores the binary notation of `num` in decimal format
    int result = 0;

    // It ignores leading zeros and leading ones
    int place_value = 1;
    while (!(num == 0 | num == -1))
    {
        // Extracting the rightmost bit from `num`
        int bit = num & 1;

        // appending `bit` to `result`
        result += bit * place_value;

        // Shifting `num` to the right
        // so that second bit (from right) now become the rightmost bit
        num = num >> 1;
        place_value *= 10;
    }

    cout << result << endl;
}

/*
10
*/
