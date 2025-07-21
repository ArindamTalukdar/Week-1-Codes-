#include <stdio.h>

int main() {
    int n, num;
    int positiveCount=0, negativeCount=0;
    printf("Enter numbers to input: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
	{
        printf("Enter number%d:",i);
        scanf("%d", &num);

        if(num > 0)
            positiveCount++;
        else if(num < 0)
            negativeCount++;
    }

    printf("Total Positive Numbers: %d\n", positiveCount);
    printf("Total Negative Numbers: %d\n", negativeCount);

    return 0;
}
