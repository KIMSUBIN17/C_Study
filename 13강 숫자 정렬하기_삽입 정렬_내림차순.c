#include <stdio.h>

int main() {
  
  int arr[10] = { 9, 17, 5, 6, 124, 112, 1, 3, 87, 55 };
  int temp; // 두 값을 바꿀 때 사용할 변수
  int length = sizeof(arr) / sizeof(int);
	int i,j;
	
	for(i=1;i<length;i++){
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j] < temp){
				arr[j+1] = arr[j];
				j=j-1;
		}
		arr[j+1] = temp;

	}
	
	for(i=0;i<length;i++){
		printf("%d ", arr[i]);
	}
	

  return 0;
}
