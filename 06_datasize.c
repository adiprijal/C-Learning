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
    

*/