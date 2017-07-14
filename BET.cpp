#include <stdio.h>#include <cstdlib>
int dice(int bet_point, int point);int bankrupt();
int main(){  printf("************\n"); printf("| MBY LAND |\n"); printf("************\n");
 int a;
 using namespace std;
 int random = rand(); int point = 1000; int bet_point = 0;  while (true) {
  printf(" 당신의 Point : %d\n", point);
  if (point <= 0)  {   bankrupt();   return 0;  }  printf("\n");
  printf(" 베팅할 금액을 입력하세요 : ");  scanf_s("%d", &bet_point);  if (bet_point > point)  {   printf("\n어디서 밑장 뺴기야!!!!");   printf("\n 강제 퇴장! \n");   return 0;  }  printf(" ********** \n");  printf(" 1 : 주사위를 맞춰라 \n");
  printf(" ********** \n");
  printf("\n");

  printf("원하는 게임을 선택하세요 : ");  scanf("%d", &a);
  printf(" ********** \n");  printf(" \n");  printf(" ********** \n");
  switch (a)  {  case 1:  {   point = dice(bet_point, point);
  }
  default:   break;  }

 } return 0;}
int dice(int bet_point, int point){ printf("1~6까지 베팅할 숫자를 입력해 주세요."); int number_userbet = 0; int final_point = 0; int new_point = 0; scanf_s("%d", &number_userbet); printf("\n");  int dice_roll = rand() % 6 + 1;
 if (dice_roll == number_userbet) {  printf("축하합니다! 당첨입니다! \n");  new_point = bet_point * 2;  final_point = new_point + point; } else {  printf("꽝! \n");  final_point = point - bet_point; } return final_point;}
int bankrupt(){ printf("파아아아사아아안!\n"); printf("파산을 축하드립니다! \n"); return 0;}
