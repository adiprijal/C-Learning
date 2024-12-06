// Storage size depends on system.
// below metioned are standard value. { may vary }


//    Negation of binary number = 2's compliment of modulus of the number



/*

    Integer
                signed -> 2 byte          - d           - 32,768 to 32,767
              unsigned -> 2 byte          - u                  0 to 65,535
          signed short -> 2 byte          - d           - 32,768 to 32,767
        unsigned short -> 2 byte          - u                  0 to 65,535
           signed long -> 4 byte          - ld            - 2^31 to 2^31-1
         unsigned long -> 4 byte          - lu                 0 to 2^32-1
        
    # 16 bits storage, 1st bit = sign [ 0 = positive | 1 = negative ]


    Float
            4 byte      6 digits precision      -f      1.2 e-38 to 3.4 e38

    Double precision floating
            8 byte      14 digits precision     -lf     1.7 e-308 to 3.4 e308
    Long Double precision floating
            10 byte     18 digits precision     -Lf     3.4 e-4932 to 1.1 e4932
    

    Char
        1 byte          -c

        each characters are represented by their ASCII value.

*/


#include<stdio.h>
void main()
{
        int d = 143;
        long int ld = 45454545;
        float f = 3.5545;
        double lf = 1.2e250;
        long double Lf = 1.2e308;
        char c;
	c ='c';
        char s[6] = "string";


//        printf("The size of int is %d.\n",sizeof(d));
//        printf("The size of unsigned int is %u.\n",sizeof(d));
//        printf("The size of long int is %ld.\n",sizeof(ld));
//        printf("The size of unsigned long int is %lu.\n",sizeof(ld));
//        printf("The size of float is %f.\n",sizeof(f));
//        printf("The size of double precision float is %lf.\n",sizeof(lf));
//        printf("The size of long double precision float is %Lf.\n",sizeof(Lf));


        printf("%d\n",d);
        printf("%u\n",d);
        printf("%ld\n",ld);
        printf("%lu\n",ld);
        printf("%f\n",f);
        printf("%lf\n",lf);
        printf("%Lf\n",Lf);
        printf("%c\n",c);
        printf("%s\n",s);


}
