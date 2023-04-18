#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	create_arr(char *buff)
{
	char *file;
	int stance;
	char buff[350];
	int cnt = 0;
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	char str[1024][1024];
	file = "./numbers.dict";
	stance = open(file, O_RDONLY);
	read(stance, buff, 350);
	while (buff[cnt1] != '\0')
	{
		while ((buff[cnt] < 97 || buff[cnt] > 122) && buff[cnt] != '\0')
			cnt++;
		while ((buff[cnt] >= 97 && buff[cnt] <= 122) && buff[cnt] != '\0')
		{
			str[cnt2][cnt3] = buff[cnt];
			cnt++;
			cnt3++;
		}
		cnt1++;
		cnt2++;
	}
	str[cnt2][cnt3] = '\0';
}