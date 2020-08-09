#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    int t;

    while (1) {
        scanf("%d\n", &t);

        if (t > 0)
        {
            int i;
            int sum = 0;

            for (i = 0; i < t; ++i)
            {
                char line[31], *food;
                int n, j = 0;

                fgets(line, 30, stdin);

                sscanf(line, "%d", &n);
                while (line[j] != ' ')
                    ++j;
                food = line + j + 1;

                if (!strncmp(food, "suco de laranja", 15))
                    sum += n * 120;
                else if (!strncmp(food, "morango fresco", 14))
                    sum += n * 85;
                else if (!strncmp(food, "mamao", 5))
                    sum+= n * 85;
                else if (!strncmp(food, "goiaba vermelha", 15))
                    sum += n * 70;
                else if (!strncmp(food, "manga", 5))
                    sum += n * 56;
                else if (!strncmp(food, "laranja", 7))
                    sum += n * 50;
                else if (!strncmp(food, "brocolis", 8))
                    sum += n * 34;
            }

            if (sum < 110)
                printf("Mais %d mg\n", 110 - sum);
            else if (sum > 130)
                printf("Menos %d mg\n", sum - 130);
            else
                printf("%d mg\n", sum);
        }
        else
            break;
    }

    return 0;
}
