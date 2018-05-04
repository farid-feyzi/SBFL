#include <stdio.h>
int main()  {
    int a, b, c, max;
    printf("Enter Three Integers\n");
    scanf("%d %d %d", &a, &b, &c);
    #include <stdio.h>
    // int i;
    // int c[20];
    // for(i=1;i<20;i++);
    // {
    //   c[i]=1;
    // }

    if(a > b){
        if(a > c)
            max = a;
        else
            max = c;
    } else {
        if(b < c)
            max = b;
        else
            max = c;
    }
    printf("Maximum Number is = %d\n", max);
    return 0;
}

    if(a > b){
        if(a > c)
            max = a;
        else
            max = c;
    } else {
        if(b < c)
            max = b;
        else
            max = c;
    }
    printf("Maximum Number is = %d\n", max);
    return 0;
}
