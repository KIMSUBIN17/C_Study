#include <stdio.h>

double average(int score[], double length) {

	int sum=0;
	
	for(int i=0;i<length;i++){
		sum+=score[i];
	}
	return sum/length;
}

int main() {
	
	int score[4];
	
	for(int i=0;i<4;i++){
		scanf("%d", &score[i]);
	}
	double length = sizeof(score) / sizeof(int);
	double my_average = average(score,length);
	
  
  printf("평균 점수는 다음과 같습니다 : %.1f\n",  my_average);

  return 0;
}
