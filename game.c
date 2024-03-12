#include <stdio.h>


int main()
{
int i;
int ans1, ans2, ans3, ans4, ans5;
int point1, point2, point3, point4, point5, point6, point7, point8, point9, point10;
int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010 ;
int totle1, totle2, totle3;

printf("Welcome to the Game\n");

printf("> press 7 to start the game\n");
printf("> press 0 to Quit the game\n");

scanf("%d", &i);


if (i==7)
{
    printf("the game has started\n");
}

 else if(i==0){
    printf("the has Ended\n");
}

else{
    printf("Invailid press to start or quit\n");
}



if (i==7)
{
printf("1)which one is the first search engine in the internet\n");
printf("1)Google\n");
printf("2)Edge ms\n");
printf("3)yahoo!\n");
printf("4)Wais\n");

printf("Enter your Answer : ");
scanf("%d", &ans1);
//
if (ans1==2)
{
 printf("Correct Answer\n");
 point1=5;
 printf("you have scored %d point\n" ,point1);
}
else{
    printf("wrong answer\n");
    point01=0;
    printf("you have scored %d point\n",point01);
}

printf("2)What does CPU stand for?\n");
    printf("1) Central Processing Unit\n");
    printf("2) Computer Processing Unit\n");
    printf("3) Central Processor Unit\n");
    printf("4) Central Peripheral Unit\n");

printf("Enter your Answer : ");
scanf("%d", &ans2);
//
if (ans2==3)
{
    printf("Correct Answer\n");
    point1=5;
    printf("you have scored %d point\n", point1);
}
else{
    printf("wrong answer\n");
    point02=0;
    printf("you have scored %d point\n",point02);
}

printf("3)What does HTML stand for in the context of web development?\n");
    printf("1) Hyperlink Text Markup Language\n");
    printf("2) Hyper Text Makeup Language\n");
    printf("3) Hyper Transfer Markup Language\n");
    printf("4) HyperText Markup Language\n");


printf("Enter your Answer : ");
scanf("%d", &ans3);
//
if (ans3==2)
{
    printf("Correct Answer\n");
    point3=5;
    printf("you have scored %d point\n", point3);
}
else{
    printf("wrong answer\n");
    point03=0;
    printf("you have scored %d point\n",point03);
}

printf("4)Which programming language is often used for developing mobile applications?\n");
printf("1)Java\n");
printf("2)Python\n");
printf("3)Swift\n");
printf("4)C++\n");

printf("Enter your answer :");
scanf("%d", &ans4);

if (ans4==1)
{
    printf("Answer is correct\n");
    point4 = 5;
    printf("you have scored %d point\n", point4);
}
else{
    printf("wrong answer\n");
    point04 = 0;
    printf("you have scored %d point\n", point04);
}

};


}   