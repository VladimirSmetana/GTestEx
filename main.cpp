
#include <gtest/gtest.h>
#include "common.h"
#include <cmath>




int main()
{
    double res = 0;
    dev(5, 2, &res);
    printf("%.1f \n", res);   
    //printf("%d", sum(1,2,3));
    return 0;
}


