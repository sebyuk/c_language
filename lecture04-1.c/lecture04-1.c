#include <stdio.h>

int main()
{
	int dmg =0;
	int hp =30;
	printf("주인공의 공격력을 입력하세요 : ");
	
	scanf("%d",&dmg);

if(dmg<hp)
{
	printf("주인공의 공격력이 %d입니다.",dmg);
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.",dmg);
	printf("적의 잔여 HP : %d",hp - dmg);	
	printf("적이 주인공을 공격하여 주인공이 뒤졌습니다");
	printf("GAME OVER");
}

else
{
	printf("주인공의 공격력이 %d입니다.",dmg);
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.",dmg);
	printf("적의 잔여 HP : 0");
	printf("적을 물리쳤습니다!");
	printf("Happy End");
}

return  0;

}
	
	
