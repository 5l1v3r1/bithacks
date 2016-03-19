#include <iostream>

/*
 * This code perform bithacks
 * with min and max
 */

int main()
{
    int x=10;  // we want to find the minimum of x and y
    int y=9;   
    int r;  // the result goes here 

    r = y ^ ((x ^ y) & -(x < y)); // min(x, y)

    std::cout << r << std::endl;
    return 0;
}


