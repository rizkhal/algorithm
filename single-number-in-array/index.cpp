#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums)
{
    int abs = 0;
    // for range
    // in javascript: for(num in nums){}
    // in php: foreach(range($num, $nums) as $number){}
    for (int num : nums)
    {
        // abs ^= num || abs = abs ^ num
        // XOR => https://en.wikipedia.org/wiki/Exclusive_or
        abs ^= num;
    }

    return abs;
}

int main(void)
{
    vector<int> v = {1, 1, 2, 2, 3, 4, 4};

    int num = singleNumber(v);

    cout << num << "\n";

    return 0;
}
