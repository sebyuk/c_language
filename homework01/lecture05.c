#include <stdio.h>

int lulu1;
int print_title_screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##          Albbano	         ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  1. Start game            ##\n");
    printf("##  2. How to play	         ##\n");
    printf("##  3. Setting               ##\n");
    printf("##  4. Exit                  ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
    return 0;
}
int lulu2;
int print_how_to_play_screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##      To Avoid Enemy       ##\n");
    printf("##                           ##\n");
    printf("##  Press arrow keys to move ##\n");
    printf("##  Press space bar to jump  ##\n");
    printf("##    CLick ML to attack     ##\n");
    printf("##                           ##\n");
    printf("##      Return to menu       ##\n");
    printf("##                           ##\n");
    printf("##     1.Yes       2.no      ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
    return 0;
}
int lulu3;
int print_setting_screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##         Setting           ##\n");
    printf("##                           ##\n");
    printf("##     Sound    <100%>       ##\n");
    printf("##                           ##\n");
    printf("##    Movement  L:<- R:->    ##\n");
    printf("##      Jump    Sacebar      ##\n");
    printf("##     Attack     ML click   ##\n");
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
    scanf("%d", &lulu1);
    while(lulu1 < 4)
    {
        if(lulu1 == 2)
        {
            print_how_to_play_screen();
            printf("input> ");
            scanf("%d", &lulu2);
            while(lulu2 < 3)
            {
                if(lulu2 == 1)
                {
                    print_title_screen();
                    printf("input> ");
                    scanf("%d", &lulu1);
                    break;
                }
                else
                {
                    break;
                }
            }
        }
        else if(lulu1 == 4)
        {
            break;
        }
	if(lulu1 == 3)
        {
            print_setting_screen();
            printf("input> ");
            scanf("%d", &lulu3);
            while(lulu3 < 3)
            {
                if(lulu3 == 1)
                {
                    print_title_screen();
                    printf("input> ");
                    scanf("%d", &lulu1);
                    break;
                }
                else
                {
                    break;
                }
            }
        }

    }
    return 0;
}
