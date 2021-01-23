/*write a program which create student structure which accept student
roll no, student name , address, subject marks, percentage and display
same on screen.*/

#include<stdio.h>
struct data
{
    int roll_no;
    char nm[40];
    char add[50];
    int total_marks , sub1 , sub2 , sub3 , sub4 , sub5 ;
    float percentage;
}stu1;

int main()
{
    printf("\t\t\t\t\t\t ~~~~~~Enter Student Data~~~~~~ : \n");

    printf("\n Enter Student Roll no. : ");
    scanf("%d", &stu1.roll_no);
    
    getchar();
    printf("\n Enter Student Name : ");
    fgets(stu1.nm,sizeof(stu1.nm),stdin);

    printf("\n Enter Student Address : ");
    fgets(stu1.add, sizeof(stu1.add),stdin);

    printf("\n Enter Student marks : ");
    scanf("%d",&stu1.marks);

    printf("\n Enter Student Percantage : ");
    scanf("%f",&stu1.percentage);

    printf("\t\t\t\t\t\t ~~~~~~Student Details~~~~~~ : \n");

    printf("\n Rollno. : %d \n",stu1.roll_no);

    printf("\n Name : %s",stu1.nm);

    printf("\n Address : %s",stu1.add);

    printf("\n Student Marks : %d \n",stu1.sub1 , sut1.sub2 , stu1.sub3 , stu1.sub4 , stu1.sub5);
    
    stu1.total = stu1.sub1 + stu1.sub2 + stu1.sub3 + stu1.sub4 + stu1.sub5 ;
    stu1.percentage = (stu1.total_marks / 500.0 ) * 100.0;

    printf("\n Student Total Marks : %d \n", sut1.total_marks);
    printf("\n Student Percentage : %.2f \n",stu1.percentage);
    
    if (per > 90 ){
      printf("\n Grade 'A'\n");
    }
    else if (per > 80 ){
      printf("\n Grade 'B'\n");
    }
    else if (per > 70 ){
      printf("\n Grade 'C'\n");
    }
    else if (per > 60 ){
      printf("\n Grade 'D'\n");
    }
    else if (per > 50 ){
      printf("\n Grade 'E'\n");
    }
    else {
      printf("\n Grade 'F'\n Sorry Next Time ): \n");
    }

    return 0 ;
}
