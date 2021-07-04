#include <stdio.h>
int main(){

    printf("Choose any shape by number...\n\n1. Rectangle\n2. Square\n3. Triangle\n4. Circle\n\n");

    int first_input;
    double pie = 3.1415926535897, lenth, width, area, circumference, ground, height, radius;

    scanf("%d", &first_input);



    if(first_input == 1){

        printf("Rectangle is a great choice!\nType the lenth: ");
        scanf("%lf", &lenth);
        printf("Type the width: ");
        scanf("%lf", &width);
        if(lenth == width){
            printf("Hey! that's a square...\n\n");
        }
        //area........................................
        area = lenth * width;
        //circumference...................................
        circumference = 2 * (lenth + width);

        //printing process............................
        printf("\n");

        printf("The area of that rectangle is: %.2lf\n", area);
        printf("The circumference of that rectangle is: %.2lf\n", circumference);

    }


    else if(first_input == 2){

        printf("Square is a great choice!\nType the lenth: ");
        scanf("%lf", &lenth);

        //area........................................
        area = lenth * lenth;
        //circumference...................................
        circumference = lenth * 4;

        //printing process............................
        printf("\n");

        printf("The area of that square is: %.2lf\n", area);
        printf("The circumference of that square is: %.2lf\n", circumference);

    }


    else if(first_input == 3){
        printf("Triangle is a great choice!\nType the base: ");
        scanf("%lf", &ground);
        printf("Type the height: ");
        scanf("%lf", &height);

        //area............................................
        area = (ground * height) * 0.5;
        //circumference............................................

        //printing process.....................................
        printf("\n");

        printf("The area of that triangle is: %.2lf", area);
    }


    else if(first_input == 4){
        printf("Circle is a great choice!\nEnter the radius: ");
        scanf("%lf", &radius);

        //area..................................................
        area = pie * (radius * radius);
        //circumference..................................................
        circumference = 2 * pie * radius;


        //printing process....................................
        printf("\n");

        printf("The area of that circle is: %.4lf\n", area);
        printf("The circumference of that circle is: %.4lf\n", circumference);

    }

    else{
        printf("\n");
        printf("YOU ARE A WAY TOO MUCH(mad)...");
    }





    printf("\n\n\n\n");
    return 0;
}

