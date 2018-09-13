        program prime 
        implicit none

        logical :: isprime
        
        isprime = prime_test_function(13) 
        
        contains 
        logical function prime_test_function(x)
        implicit none
                integer :: i, x
                prime_test_function = .TRUE.
                do i = 2, x/2 
                        if (mod(x,i) == 0) then
                                prime_test_function = .False. 
                                exit 
                        end if 
                end do   
        end function 

        end program 
