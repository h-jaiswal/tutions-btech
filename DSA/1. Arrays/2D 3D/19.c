// Write a program to read a 2D array marks which stores the marks of five students in three
// subjects. Write a program to display the highest marks in each subject.
#include <stdio.h>
#include <conio.h>
int main()
{
int marks[5][3], i, j, max_marks;
for(i=0; i<5; i++)
{
printf("\n Enter the marks obtained by student %d",i+1);
for(j=0; j<3; j++)
{
printf("\n marks[%d][%d] = ", i, j);
scanf("%d", &marks[i][j]);
}
}
for(j=0; j<3; j++)
{
max_marks = -999;
for(i=0; i<5; i++)
{
if(marks[i][j]>max_marks)
max_marks = marks[i][j];
}
printf("\n The highest marks obtained in the subject %d = %d", j+1, max_marks);
}
getch();
return 0;
}

// Output
// Enter the marks obtained by student 1
// marks[0][0] = 89
// marks[0][1] = 76
// marks[0][2] = 100
// Enter the marks obtained by student 2
// marks[1][0] = 99
// marks[1][1] = 90
// marks[1][2] = 89
// Enter the marks obtained by student 3
// marks[2][0] = 67
// marks[2][1] = 76
// marks[2][2] = 56
// Enter the marks obtained by student 4
// marks[3][0] = 88
// marks[3][1] = 77
// marks[3][2] = 66
// Enter the marks obtained by student 5
// marks[4][0] = 67
// marks[4][1] = 78
// marks[4][2] = 89
// The highest marks obtained in the subject 1 = 99
// The highest marks obtained in the subject 2 = 90
// The highest marks obtained in the subject 3 = 100