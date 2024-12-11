#include<stdio.h>

int math, english, literature;

int main() {

	printf("moi ban nhap diem toan");
	scanf("%d", &math);
	
	printf("moi ban nhap diem anh");
	scanf("%d", &english);
	
	printf("moi ban nhap diem van");	
	scanf("%d", &literature);
	
	int sum = math + english + literature;
	float average = (math + english + literature) / 3.0;
	
	printf("tong 3 mon là %d\n", sum);
	printf("trung binh 3 mon la %.2f\n", average);
	
	return 0;
}
