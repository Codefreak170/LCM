# LCM
Developed by Sarit Shekhar Roy

#include <stdio.h>
 
int gcf(int x , int y)
{
    if (x == 0)
        return y;
    return gcf(y % x , x);
}
 

int lcm(int x, int y)
{
    return (x / gcf(x, y)) * y;
}
 

int main()
{
    int x,y;
    printf("Please enter the first no : ");
    scanf("%d", &x);
    printf("Please enter the second no : ");
    scanf("%d", &y);
    
    printf("LCM of %d and %d = %d ", x, y, lcm(x, y));
    return 0;
}
