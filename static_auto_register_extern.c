///static auto register and extern variable  lacal and global
/// global variable are declarwed outside the function and accessible all ove the program
/// local vartiable are declared in the fnction and accessibleonly upto the function.
#include<stdio.h>
void show()
{
    static int x=100;
    auto int y =2000;
    x++;
    y++;
    printf("X = %d",x);
    printf("\tY = %d\n",y);
}
int main()
{
    show();  /// x incremented by 1 and y also
    show();  /// x incremented but y is stable due to the it is declared as auto has local scope, initial values are garbage and memory used is ram contain life within funct'n
    show();  /// x incremented but y is stable
    show();  /// x incremented but y is stable
}
/*
X = 101 Y = 2001
X = 102 Y = 2001
X = 103 Y = 2001
X = 104 Y = 2001
*/
