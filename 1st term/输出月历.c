#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    switch(n)
    {
        case 7:
            {
                printf("Sun Mon Tue Wen Thu Fri Sat\n  1   2   3   4   5   6   7\n  8   9  10  11  12  13  14\n 15  16  17  18  19  20  21\n 22  23  24  25  26  27  28\n 29  30");
                break;
            }
        case 1:
            {
                printf("Sun Mon Tue Wen Thu Fri Sat\n      1   2   3   4   5   6\n  7   8   9  10  11  12  13\n 14  15  16  17  18  19  20\n 21  22  23  24  25  26  27\n 28  29  30");
                break;
            }
        case 2:
            {
                printf("Sun Mon Tue Wen Thu Fri Sat\n          1   2   3   4   5\n  6   7   8   9  10  11  12\n 13  14  15  16  17  18  19\n 20  21  22  23  24  25  26\n 27  28  29  30");
                break;
            }
        case 3:
            {
                printf("Sun Mon Tue Wen Thu Fri Sat\n              1   2   3   4\n  5   6   7   8   9  10  11\n 12  13  14  15  16  17  18\n 19  20  21  22  23  24  25\n 26  27  28  29  30");
                break;
            }
        case 4:
            {
                printf("Sun Mon Tue Wen Thu Fri Sat\n                  1   2   3\n  4   5   6   7   8   9  10\n 11  12  13  14  15  16  17\n 18  19  20  21  22  23  24\n 25  26  27  28  29  30");
                break;
            }
        case 5:
            {
                printf("Sun Mon Tue Wen Thu Fri Sat\n                      1   2\n  3   4   5   6   7   8   9\n 10  11  12  13  14  15  16\n 17  18  19  20  21  22  23\n 24  25  26  27  28  29  30");
                break;
            }
        case 6:
            {
                printf("Sun Mon Tue Wen Thu Fri Sat\n                          1\n  2   3   4   5   6   7   8\n  9  10  11  12  13  14  15\n 16  17  18  19  20  21  22\n 23  24  25  26  27  28  29\n 30");
                break;
            }
    }
    return 0;
}
