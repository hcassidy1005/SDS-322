        program test_random_number
        implicit none
        real, dimension(100) :: r
        integer :: a, b          
         call random_number(r)
         print *, "Array: " 
         print *, r 
         a = maximum(100,r)  
         print *, "maximum value: ",r(a) 
         print *, "maximum value index: ", a

         b = minimum(100,r)
         print *, "minimum value: ",r(b)
         print *, "minimum value index: ", b  
        
        contains 
        integer function maximum(n,x) 
        implicit none 
                integer :: n, i  
                real, dimension(n) :: x
                real :: max_val = 0  
                
                do i = 1, n 
                        if (x(i) > max_val) then 
                                max_val = x(i) 
                                maximum = i 
                        end if 
                end do 
                         
        end function 

        integer function minimum(n,x)
        implicit none 
                integer :: n, i   
                real, dimension(n) :: x 
                real :: min_val = 1 
                
                do i = 1, n 
                        if (x(i) < min_val) then 
                                min_val = x(i) 
                                minimum = i 
                        end if 
                end do 

        end function 

        end program
