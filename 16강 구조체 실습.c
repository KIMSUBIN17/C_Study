#16강_구조체 배열 사용해 국,영,수 평균 계산

#include <stdio.h>

typedef struct{
char name[15];
int kor, eng, math;
} Student;

void average(Student*std){

for(int j=0; j<3; j++){
	double avg=(std[j].kor+std[j].eng+std[j].math)/3.0;
	printf("%s %.1lf\n",std[j].name,avg);
}
}

int main() {
double avg;
Student std[3];

for(int i=0; i<3; i++)
	scanf("%s %d %d %d",std[i].name ,&std[i].kor, &std[i].eng, &std[i].math);

average(&std);

return 0;
}