#include <stdio.h>
int main(){

    printf("Choose any shape by number...\n\n1. Rectangle\n2. Square\n3. Triangle\n4. Circle\n\n");

    int first_input;
    double pie = 3.1415926535897, lenth, width, area, amplitude, ground, height, radius;

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
        //amplitude...................................
        amplitude = 2 * (lenth + width);

        //printing process............................
        printf("\n");

        printf("The area of that rectangle is: %.2lf\n", area);
        printf("The amplititude of that rectangle is: %.2lf\n", amplitude);

    }


    else if(first_input == 2){

        printf("Square is a great choice!\nType the lenth: ");
        scanf("%lf", &lenth);

        //area........................................
        area = lenth * lenth;
        //amplitude...................................
        amplitude = lenth * 4;

        //printing process............................
        printf("\n");

        printf("The area of that square is: %.2lf\n", area);
        printf("The amplitude of that square is: %.2lf\n", amplitude);

    }


    else if(first_input == 3){
        printf("Triangle is a great choice!\nType the base: ");
        scanf("%lf", &ground);
        printf("Type the height: ");
        scanf("%lf", &height);

        //area............................................
        area = (ground * height) * 0.5;
        //amplititude............................................

        //printing process.....................................
        printf("\n");

        printf("The area of that triangle is: %.2lf", area);
    }


    else if(first_input == 4){
        printf("Circle is a great choice!\nEnter the radius: ");
        scanf("%lf", &radius);

        //area..................................................
        area = pie * (radius * radius);
        //amplitude..................................................
        amplitude = 2 * pie * radius;


        //printing process....................................
        printf("\n");

        printf("The area of that circle is: %.4lf\n", area);
        printf("The amplitude of that circle is: %.4lf\n", amplitude);

    }

    else{
        printf("\n");
        printf("YOU ARE A WAY TOO MUCH(mad)...");
    }





    printf("\n\n\n\n");
    return 0;
}

