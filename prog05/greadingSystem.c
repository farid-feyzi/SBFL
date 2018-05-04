//http://www.plus2net.com/c-tutorial/grade.php
#include <stdio.h>
int main(void){
int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num); // printing outputs

if(num >= 96){
printf(" You got A+ grade"); // printing outputs
}
else if ( num >=90){ // Note the space between else & if
printf(" You got A grade");
}
else if ( num >=86){ // Note the space between else & if
printf(" You got A- grade");
}
else if ( num >=80){ // Note the space between else & if
printf(" You got A grade");
}
else if ( num >=76){ // Note the space between else & if
printf(" You got B+ grade");
}
else if ( num >=70){ // Note the space between else & if
printf(" You got B grade");
}
else if ( num >=66){ // Note the space between else & if
printf(" You got B- grade");
}
else if ( num >=60){ // Note the space between else & if
printf(" You got C+ grade");
}
else if ( num >=56){ // Note the space between else & if
printf(" You got C grade");
}
else if ( num >50){ // Note the space between else & if
printf(" You got C- grade");
}
else if ( num >46){ // Note the space between else & if
printf(" You got D+ grade");
}
else if ( num >40){
printf(" You got D grade");
}

else if ( num < 40){
printf(" You Failed in this exam");
}
return 0;
}