#include <stdio.h>
int main(){
    int usn;
    int sub1,sub2,sub3,sub4,sub5,total;
    float avg;
    printf("Enter USN: ");
    scanf("%d", &usn);
    printf("Enter 5 subject marks: ");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    if (sub1 < 40 || sub2 < 40 || sub3 < 40 || sub4 < 40 || sub5 < 40) {
        printf("Grade: FAIL (failed in one or more subjects)\n");}
    else{
        total = sub1 + sub2 + sub3 + sub4 + sub5;
    avg = total / 5.0;

    printf("\nUSN: %d\n", usn);
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", avg);
        if (avg >= 85 && avg <= 100)
            printf("Grade: Distinction\n");
        else if (avg >= 60 && avg <= 84)
            printf("Grade: First Class\n");
        else if (avg >= 40 && avg <= 59)
            printf("Grade: Second Class\n");
        else
            printf("Grade: FAIL\n");
    }
}

