#include <stdio.h>

int dino1;
int print_title_screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##         Dino Run          ##\n");
    printf("##          0.0.1            ##\n");
    printf("##                           ##\n");
    printf("##  1. Start game            ##\n");
    printf("##  2. How to play           ##\n");
    printf("##  3. Exit                  ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
    return 0;
}
int dino2;
int print_how_to_play_screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##      To Avoid Enemy       ##\n");
    printf("##                           ##\n");
    printf("##  press space bar to jump  ##\n");
    printf("##                           ##\n");
    printf("##      Return to menu       ##\n");
    printf("##                           ##\n");
    printf("##     1.Yes       2.no      ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
    return 0;
}
int main()
{
    print_title_screen();
    printf("input> ");
    scanf("%d", &dino1);
    while(dino1 < 3)
    {
        if(dino1 == 2)
        {
            print_how_to_play_screen();
            printf("input> ");
            scanf("%d", &dino2);
            while(dino2 < 3)
            {
                if(dino2 == 1)
                {
                    print_title_screen();
                    printf("input> ");
                    scanf("%d", &dino1);
                    break;
                }
                else
                {
                    break;
                }
            }
        }
        else if(dino1 == 3)
        {
            break;
        }
    }
    return 0;
}
