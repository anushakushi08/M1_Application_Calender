#include<record.h>

/**
 * @brief funtion to  set cursor position
 * @switch(record_oprn)
 * @return test_value
 */

void gotoxy(int x,int y)
{
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
