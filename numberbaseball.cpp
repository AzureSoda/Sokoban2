#include <iostream>
#include <stdlib.h> // rand 함수 쓰려고 호출
#include <time.h> // time함수 쓰려고 호출

using namespace std;


int main() {
	int option = 0;
	int i;
	int comnum, mynum;
	int com1, com2, com3;
	int my1, my2, my3;
	int strike = 0;
	int ball = 0;

	do {
		option = 0;
		std::cout << "계속 할꺼면 1 입력 (0 입력시 종료)\n";
		std::cin >> option; // 0 입력시 종료하고 그 외 숫자, 문자 입력시 게임 시작
		int strike = 0;
		int ball = 0;
			srand(time(NULL)); //rand 쓰기전에 초기화

			for (i = 0; i < 9; i++)
			{
				comnum = rand() % 1000;
			}

			com1 = comnum / 100; // 100의 자리수
			com2 = comnum %100/10 ;  // 10의 자리수
			com3 = comnum % 10;  // 1의 자리수

			printf("%d\n", comnum);    //// 임시용 숫자확인

			cout << "예상숫자 입력하기\n";
			cin >> mynum;

			my1 = mynum / 100;
			my2 = mynum % 100/10;
			my3 = mynum % 10;

			printf("% d, %d , %d\n", com1, com2, com3);  //임시용 숫자 확인
			printf("% d, %d , %d\n", my1, my2, my3);

			
			if (com1 == my1); {
				strike += 1; 
				if (com1 == my2 or com1 == my3); {
				ball += 1; }
			
			
			}
			
			
			if (com2 == my2); {
				strike += 1;
				if (com2 == my2 or com2 == my3); {
					ball += 1; }
			}
			
			
			
			if (com3 == my3); {
				strike += 1;
				if (com3 == my2 or com3 == my3); {
					ball += 1; }
			}
			
			

			


			if (ball == 0 && strike == 0)
				printf("낫싱\n");

			else if (ball == 0 && strike != 0)
				printf("%d 스트라이크\n", strike);

			else if (ball != 0 && strike != 0)
				printf("%d 스트라이크, %d 볼\n", strike, ball);
			
			else if (comnum == mynum)
				printf("정답입니다\n");


	} while (option!=0);
}




/*
if 
com1==my1
strike=+1
*/
