#include <stdio.h>
struct course {
	int Credit_Hours;
	float Student_Score;
};
struct Student{
	char arr_Of_Courses[100];
	float GPA;
	};
void gpa_cal(struct course score1,struct course score2){
  struct Student cal;
  cal.GPA=(score1.Student_Score*3)+(score2.Student_Score*4);
  cal.GPA=cal.GPA/7;
  printf("your GPA is %f",cal.GPA);}
int main(){
struct course score1;
struct course score2;
struct Student student1;
student1.arr_Of_Courses[0]='Mathematics';
student1.arr_Of_Courses[1]='Programming';
printf("enter your score in math(out of 4)\n");
scanf("%f",&score1.Student_Score);	
printf("enter your score in programming(out of 4)\n");
scanf("%f",&score2.Student_Score);	
gpa_cal(score1,score2);
 return 0;	
}

