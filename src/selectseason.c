#include <stdio.h>
#include<math.h>
int main()
{
    int a, b;
    char ans;
    int dtem = 30;
    while (1) {
        printf("enter the number");
        scanf("%d", &a);
        if (a >= 16 && a <= 35)
        {
            printf("%d measured temp", a);
            if (a == dtem)
            {
                printf("do u want change in temp");
                scanf("%c", &ans);
                if (ans == 'y')
                {
                    printf("enter the desired temp");
                    scanf("%d", &b);
                    dtem = b;
                }
                else(ans == 'n'); {
                    break;
                }
            }
            else {
                continue;
            }
        }
        else
        {
            continue;
        }
    }
