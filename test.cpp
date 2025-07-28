#include<stdio.h>
#include<string.h>

int main()
{
    int i, k, a, count = 0; 
    char c[50]; 
    printf("\nEnter the data to be send:");
    fflush(stdin);
    gets(c); 

    a = strlen(c);

    for(i = 0; i < a; i++)
    {
        if(c[i] == '1')
        {
            count++; 
            if(count == 6)
            {
                for(k = a; k > i + 1; k--)
                    c[k] = c[k - 1]; 
                a = a + 1;
                c[i + 1] = '0';
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }

    printf("\nData after stuffing:"); 
    puts(c);

    count = 0; 
    for(i = 0; i < a; i++)
    {
        if(c[i] == '1')
        {
            count++; 
            if(count == 5)
            {
                for(k = i + 1; k < a; k++) 
                    c[k] = c[k + 1];
                a = a - 1;
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }
}
