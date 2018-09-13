        program fizzbuzz 
        implicit none 

        integer :: a = 15, b, c
        real :: j, k
        
        b = a/5
        j = a/5.0
        c = a/3
        k = a/3.0
        print*, "a = " , a 
        if( j == real(b) .and. k == real(c) ) then 
                print *, "Fizzbuzz" 
        else if( j== real(b) ) then 
                print *, "Buzz"
        else if (k == real(c)) then
                print *, "Fizz" 
        end if

        end program  
