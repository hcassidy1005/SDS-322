        program divisible 
        implicit none 

        integer :: a = 9, b = 3

        if (mod(a,b) == 0) then
                print *, b , "is a divisor of", a 
        else 
                print *, b, "is not a divisor of", a 
        end if 

        end program 
