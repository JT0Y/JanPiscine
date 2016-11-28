http://stackoverflow.com/questions/17727996/how-can-i-test-this-c-function

md5: Of course, you can test it, although it looks weird.

#include <stdio.h>

void function(int *********anInt)
{
    *********anInt = 5;
}

int main()
{
    int n = 0;
    int *p1 = &n;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    function(&p8);
    printf("%d\n", n);
    return 0;
}
