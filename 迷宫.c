 #include <stdio.h>
 #include <windows.h>
 #include <conio.h>
 int curX = 0, curY = 0;
 char hsh;
 char maze[100][100] =
 {	
  "**#************#*",	
  "**###**********#*",
  "**********#**#*#*",
  "##**#********#***",
  "****#*##*****#***",
  "****#**##*****#**",
  "**********#####**",
  "*#**#**#*********",
  "******####*******",
  "####*********#***",
  "**#*#*#*#**#*####",	
  "*#*******###****E",
	
 };
 
    void printplayer()
	{
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD pos;
		pos.X = curX;	pos.Y = curY;
		SetConsoleCursorPosition(handle,pos);
		printf("M");
	}
	void printmaze()
	{
		int i;
		for ( i = 0; i < 12; i++)
			{
				puts(maze[i]);
			}
					
	printf("curX=%d curY=%d\n",curX ,curY);
	printf("        ��ӭ�����߳���ɭ��С��Ϸ!\n\
	��Ϸ����M������ѩ������λ��\
	�����ƶ� W(��)��S(��)��A���󣩡�D���ң������ѩ����\
	                                �߳���ɭ��ȥ���߸�С���˵ķ����E��\n\
	��ܰ��ʾ����������3-8��\n");
	
		
	}
	void move(char hsh)
	{
		switch (hsh)
    	{		case'w':
					if (curY > 0)	
						curY--;			
					if (maze[curY][curX] == '#')	
						curY++;	
						break;	
				case's':
						curY++;	
					if (maze[curY][curX] == '#')
						curY--;	
						break;	
				case'a':		
					if (curX > 0)		
						curX--;	
					if (maze[curY][curX] == '#')
						curX++;
						break;	
				case'd':	
					curX++;	
		    		if (maze[curY][curX] == '#')
					curX--;	
					break;
	 }
    }
	int main()
	{
		while(1)
			{	
		
				system("cls");	
				printmaze();	
				printplayer();
	    		hsh = getch();	
				move(hsh);	
				if (maze[curY][curX] == 'E')
				{		
					printf("success!");		
					break;
				}
	        }
				return 0;
	}


