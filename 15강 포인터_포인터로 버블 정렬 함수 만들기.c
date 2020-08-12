#include <stdio.h>

void BubbleSort(int p[], int length);

int main() {
	int arr[10];
	int i;
	int *p=NULL;
	int length;
	
	for(i=0;i<10;i++){
		scanf("%d", &arr[i]);
	}
	
	length = sizeof(arr)/sizeof(int);
	
	
	BubbleSort(arr,length);
	
	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}

void BubbleSort(int p[], int length){
	int i,j;
	int temp;
	
	for(i=0;i<length-1;i++){
		for(j=0;j<length-1;j++){
			if(p[j]>p[j+1]){
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
}