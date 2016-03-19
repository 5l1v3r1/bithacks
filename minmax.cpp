#include <iostream>

/*
 * This code perform bithacks
 * with min and max
 */

int max(int x, int y)
{
    if(x < y) {
        return y;
    } 
    else {
        return x;
    }
}

int min(int x, int y)
{
    if(x < y) {
        return x;
    }
    else {
        return y;
    }
}


int main()
{
    int x=10;  // we want to find the minimum of x and y
    int y=9;   
    int min1;  // the result goes here 
    int max1;
    
    clock_t tStart = clock();
    min1 = y ^ ((x ^ y) & -(x < y)); // min(x, y)
    double time1 = (double)(clock() - tStart)/CLOCKS_PER_SEC; 
    
    clock_t tStart2 = clock();
    max1 = x ^ ((x ^ y) & -(x < y)); // max(x, y)
    double time2 = (double)(clock() - tStart2)/CLOCKS_PER_SEC;
    
    std::cout << min1 << " timing " << time1 << " seconds " << std::endl;
    std::cout << max1 << " timing " << time2 << " seconds " << std::endl;
    
    //using function procedure
    //

    clock_t tStart3 = clock();
    int min2 = min(x,y);
    double time3 = (double)(clock() - tStart3)/CLOCKS_PER_SEC;

    clock_t tStart4 = clock();
    int max2 =  max(x, y);
    double time4 = (double)(clock() - tStart4)/CLOCKS_PER_SEC;
    
    std::cout << min2 << " timing " << time3 << " seconds " << std::endl;
    std::cout << max2 << " timing " << time4 << " seconds " << std::endl;
    
    return 0;
}


