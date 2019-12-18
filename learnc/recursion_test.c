#include <stdio.h>

void func(int d)
{
    if (d == 1)
        return;

    func(d - 1);
    printf("\n%d", d);

}

int main()
{
    func(5);
}