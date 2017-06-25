#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
float change;

do
{
    printf("How much change is owed?\n");
    change = get_float();
}
while (change < 0);
int CoinCount = 0;
change = (change * 100);

while (change >= 1)
{
    if (change >= 25)
    {
        change -= 25;
        CoinCount++;
    }

   else if (change >= 10)
    {
        change -= 10;
        CoinCount++;
    }
   else if (change >= 5)
    {
        change -= 5;
        CoinCount++;
    }
    else 
    {
        change -= 1;
        CoinCount++;
        
    }
    
}

    printf("%i\n", CoinCount);
    
}