#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify_down(int *arr, int begin, int end){
	int dad = begin;
	int son = dad * 2 + 1;
	while (son <= end){
		if(son + 1 <= end && arr[son + 1] <= arr[son])
			son++;
		if(arr[dad] < arr[son]) return;
		else{
			swap(arr + dad, arr + son);
			dad = son;
			son = dad * 2 + 1;
		}
	}
}

void heapify_up(int *arr, int begin, int end){
	int son = end;
	int dad = (son - 1) / 2;
	while (son > begin){
		if(arr[dad] <= arr[son])
            return;
        else{
			swap(arr + dad, arr + son);
			son = dad;
		    dad = (son - 1) / 2;
		}
	}
}

int main(){
    int input, arr[10000], size = 0;
    while(scanf("%d", &input) != EOF){
        if(input == 1){
            scanf("%d", &arr[size]);
			size++;
			heapify_up(arr, 0, size - 1);
			printf("The min-heap is of size %d and the current minimum is %d.\n", size, arr[0]);
		}else if(input == 2){
			if(size == 0){
				printf("The min-heap is empty with size = 0.\n");
			}else{
				swap(&arr[0], &arr[size - 1]);
				arr[size - 1] = 0;
				size--;
				heapify_down(arr, 0, size - 1);
				if(size == 0){
					printf("The min-heap is empty with size = 0.\n");
				}else{
					printf("The min-heap is of size %d and the current minimum is %d.\n", size, arr[0]);
				}
			}
		}else if(input == 3){
			for (int i = 0; i < size - 1; i++){
				printf("%d ", arr[i]);
			}
			if(size > 0){
				printf("%d", arr[size - 1]);
			}
			printf("\n");
		}else{
            break;
        }
    }
    return 0;
}