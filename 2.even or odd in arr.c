#include<stdio.h>
int main(){
	int i,n;
	
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements");
	for(i=0;i<n;++i){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;++i){
		if(i%2==0){
			printf(i,"is Even\n");
		}
		else{
			printf(i,"is Odd");
		}
	}
	return 0;
}