        program hw5 
        implicit none 

        integer :: a, b
        logical :: prime = .TRUE. 
        
        do a = 1, 100
                prime = prime_test_function(a)
                if (prime == .True.) then 
                        print *, a, "is prime" 
                else 
                        b = factor(a) 
                        print *, a, "is not prime. It is divisible by:", b
                end if 
        end do

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

        integer function factor(x)
        implicit none 
                integer :: i, x
                do i = 2, x/2
                        if (mod(x,i) == 0) then 
                                factor = i
                                exit 
                        end if 
                end do 
        end function 

        end program 
