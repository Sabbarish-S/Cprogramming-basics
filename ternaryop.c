// ternary operator = shortcut to if/else when assigning/returning a value
// (condition) ? value if true : value if false
 
 #include <stdio.h>
 int findmax(int x, int y){

    /*if( x > y)
    {
        return x;
    }
    else
    {
        return y;
    }*/

    return (x>y) ? x : y;
 
 }

 int main()
 {
    int max = findmax(9,90);
    printf("%d", max);
 }