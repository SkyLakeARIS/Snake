#include "Manager.h"

/*
�������� 20'01.12
�ϼ����� 20'01.14
�������� 20'06.29~20'06.30
����:
 �ڵ� ���Ĵٵ� ����
 ���� ����: https://docs.popekim.com/ko/coding-standards/cpp
 ���� ����
 �ڵ� ����
made.SkyLakeARIS
*/
int main()
{
    system("mode con:cols=60 lines=30");

    Manager Game;
    Game.Run();

    gotoxy(9, 20);
    std::cout << "�����Ϸ��� �ƹ�Ű�� ��������.";
    _getch();
    return 0;
}