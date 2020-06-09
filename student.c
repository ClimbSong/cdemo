#include <stdio.h>
struct student
{
    int age;
    int num;
    char name[10];
    int score;
    double ability;
};
int main()
{
    const int STU_COUNT=3;
    int sum;
    int i;
    struct student stu[3]={
            {20,1,"one",100,100.0},
            {21,2,"two",90,100.0},
            {22,3,"three",80,100.0}
        };

        // struct student* s;
        // for(s=stu;s<stu+3;s++)
        // {
            
        //     sum+=(*s).score;
        // }
        
        for (i=0;i<STU_COUNT;i++)
        {
            sum=sum+stu[i].score;
        }

        printf("The sum score of students is:%d\n",sum);
        return 0;
}