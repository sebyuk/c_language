#include <stdio.h>
#include <string.h>

int width = 30;
int height = 15;

int clearBuffer(char* screenBuf, int width, int height)
{
    int i = 0;
    int j = 0;
    while (j < height)
    {
        while (i < width + 1)
        {
            if (i == width)
                screenBuf[i + (j * (width + 1))] = '\n';
            else
            {
                if (i == 0 || i == 1 || i == (width - 1) || i == (width - 2) || j == 0 || j == (height - 1))
                    screenBuf[i + (j * (width + 1))] = '#';
                else
                    screenBuf[i + (j * (width + 1))] = ' ';
            }
            i = i + 1;
        }
        i = 0;
        j = j + 1;
    }
    screenBuf[height * (width + 1) - 1] = '\0';
}

int writeStringToBuffer(const char* string, int x, int y, char* screenBuf)
{
    int index = y * (width + 1) + x;
    int length = strlen(string);
    
    if (x < 0 || x + length > width || y < 0 || y >= height)
    {
        return 0;
    }
    for (int i = 0; i < length; i++)
    {
        if (index + i < width * height) 
        {
            screenBuf[index + i - 1] = string[i];
        }
    }

    return 1;
}


int setTitleToScreenBuffer(char* screenBuf, int width, int height)
{
    clearBuffer(screenBuf, width, height);
    writeStringToBuffer("Lulu's Adventure", width / 2 - 7, height / 2 - 2, screenBuf);
    writeStringToBuffer("1. Start game", width / 2 - 5, height / 2 - 1, screenBuf);
    writeStringToBuffer("2. How to play", width / 2 - 5, height / 2, screenBuf);
    writeStringToBuffer("3. Setting", width / 2 - 4, height / 2 + 1, screenBuf);
    writeStringToBuffer("4. Exit", width / 2 - 3, height / 2 + 2, screenBuf);
}

int setGameOverToScreenBuffer(char* screenBuf, int width, int height)
{
    clearBuffer(screenBuf, width, height);
    writeStringToBuffer("Game over", width / 2 - 5, height / 2 - 1, screenBuf);
    writeStringToBuffer("1. Go to Main", width / 2 - 6, height / 2, screenBuf);
    writeStringToBuffer("2. Exit", width / 2 - 4, height / 2 + 1, screenBuf);
}

int setHowToPlayToScreenBuffer(char* screenBuf, int width, int height)
{
    clearBuffer(screenBuf, width, height);
    writeStringToBuffer("To Avoid Enemy", width / 2 - 7, height / 2 - 3, screenBuf);
    writeStringToBuffer("Press arrow keys to move", width / 2 - 11, height / 2 - 2, screenBuf);
    writeStringToBuffer("Press space bar to jump", width / 2 - 11, height / 2 - 1, screenBuf);
    writeStringToBuffer("Click ML to attack", width / 2 - 9, height / 2, screenBuf);
    writeStringToBuffer("Return to menu", width / 2 - 7, height / 2 + 1, screenBuf);
    writeStringToBuffer("1. Yes   2. No", width / 2 - 7, height / 2 + 2, screenBuf);
}

int setSettingToScreenBuffer(char* screenBuf, int width, int height)
{
    clearBuffer(screenBuf, width, height);
    writeStringToBuffer("Setting", width / 2 - 3, height / 2 - 3, screenBuf);
    writeStringToBuffer("Sound    <100%>", width / 2 - 7, height / 2 - 2, screenBuf);
    writeStringToBuffer("Movement  L:<-  R:->", width / 2 - 10, height / 2 - 1, screenBuf);
    writeStringToBuffer("Jump    Spacebar", width / 2 - 7, height / 2, screenBuf);
    writeStringToBuffer("Attack     ML click", width / 2 - 9, height / 2 + 1, screenBuf);
    writeStringToBuffer("Return to menu", width / 2 - 7, height / 2 + 2, screenBuf);
    writeStringToBuffer("1. Yes   2. No", width / 2 - 7, height / 2 + 3, screenBuf);
}

int main()
{
    char screenBuf[465];
    int currentScreen = 1;

    while (1) 
    {
        if (currentScreen == 1) 
        {
            setTitleToScreenBuffer(screenBuf, width, height);
        } 
        else if (currentScreen == 2) 
        {
            setGameOverToScreenBuffer(screenBuf, width, height);
        } 
        else if (currentScreen == 3) 
        {
            setHowToPlayToScreenBuffer(screenBuf, width, height);
        } 
        else if (currentScreen == 4) 
        {
            setSettingToScreenBuffer(screenBuf, width, height);
        }

        printf("%s\n", screenBuf);

        int choice;
        if (scanf("%d", &choice) != 1)
        {
            printf("잘못된 입력입니다. 다시 입력하세요.\n");
            while (getchar() != '\n');
            continue;
        }

        if (currentScreen == 1) 
        {
            if (choice == 2) 
            {
                currentScreen = 3;
            } 
            else if (choice == 3) 
            {
                currentScreen = 4;
            } 
            else if (choice == 4) 
            {
                break;
            }
        } 
        else if (currentScreen == 3) 
        {
            if (choice == 1) 
            {
                currentScreen = 1;
            } 
            else if (choice == 2) 
            {
                
            }
        } 
        else if (currentScreen == 4) 
        {
            if (choice == 1) 
            {
                currentScreen = 1;
            } 
            else if (choice == 2) 
            {
            
            }
        }
    }

    return 0;
} 
