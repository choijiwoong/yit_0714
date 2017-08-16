#include <stdio.h>
#include <cstdlib>

int dice(int bet_point, int point);int bankrupt();

int main(){
  printf("************\n");
  printf(" 어서오세요 \n");
  printf("환상의 세계 YIT가 당신을 환영합니다");
  printf("************\n");
  int a;
  using namespace std;
  int random = rand();
  int point = 1000;
  int bet_point = 0;
  while (true) {
  printf(" 당신의 Point : %d\n", point);
  if (point <= 0)
  {
  bankrupt();
  return 0;
  }
  printf("\n");
  printf(" 베팅할 금액을 입력해주세요?? : ");
  printf("100점이면 ???이 기다리고 있어요!!");
  printf("500점이면 ???이 기다리고 있어요!!");
  printf("10000점이면 제가 당신을 찾아가지요 외로운 저를 현실로 불러 주세요!");
  scanf_s("%d", &bet_point);
  if (bet_point > point)
  {
  printf("\n밑장빼기하면 손목가지인것을 모르시나요???");
  printf("\n 퇴장을 명하겠습니다! \n");
  return 0;
  }
  printf(" ********** \n");
  printf(" 1 : 주사위를 맞춰주실거지요?? \n");
  printf(" ********** \n");
  printf("\n");

  printf("원하는 게임을 선택해주세요?? : ");
  scanf("%d", &a);
  printf(" ********** \n");
  printf(" !주의!\n");
  printf("과도한 지출을 주의 해주세요...");
  printf(" ********** \n");
  switch (a)
  {
  case 1:
  {   
  point = dice(bet_point, point);
  }
  default:
  break;
  }

  }
  return 0;
  }

int dice(int bet_point, int point)
{
  printf("1~6까지 베팅할 숫자를 입력해 주세요.");
  int number_userbet = 0;
  int final_point = 0;
  int new_point = 0;
  scanf_s("%d", &number_userbet);
  printf("\n");
  int dice_roll = rand() % 6 + 1;
  if (dice_roll == number_userbet)
  {
  printf("축하해요! 당첨이네요!! \n");
  new_point = bet_point * 2;
  final_point = new_point + point;
  } 
  else
  {
  printf("꽝! \n");
  final_point = point - bet_point;
  }
  return final_point;
  }
 
  int bankrupt()
  {
  printf("파산입니다\n");
  printf("파산을 축하드립니다! \n");
  printf("아쉽네요 조금만 더 했으면 저를 볼 수 있었을 텐데요......");
  return 0;
  }
