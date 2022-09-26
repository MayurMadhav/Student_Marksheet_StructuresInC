#include <stdio.h>
struct student{
	char sname[40];
	int rno;
	float total;
	float average;
	char subject[40];
	int marks[7];
}s[3];
int main(){

	int i,j;
	
	printf("\n");
	
	printf("------------Student Details----------\n ");
	
	for(i=0;i<3;i++){
	printf("Enter the student name: \n");
	scanf("%s",s[i].sname);
	
	printf("Enter the roll number: \n");
	scanf("%d",&s[i].rno);
	
	s[i].total=0;
	for(j=1;j<=6;j++){
		printf("Enter the marks of subject %d\n",j);
		scanf("%d",&s[i].marks[j]);
		s[i].total+=s[i].marks[j];
	}
	s[i].average = (s[i].total/600)*100;
	
	printf("\n");
	getchar();
}
	
	printf("------------Student Marksheet---------- \n");
	printf("\n");
	for(i=0;i<3;i++){
	printf("Student name: %s\n",s[i].sname);
	printf("Enter the roll number: %d\n",s[i].rno);
	
	
	for(j=1;j<=6;j++){
		printf("Marks of subject %d\n",j);
		printf("%d\n",s[i].marks[j]);
	}
	
	printf("Total marks is %f\n",s[i].total);
	printf("Percentage is %f\n",s[i].average);
	printf("\n");
	}
}
