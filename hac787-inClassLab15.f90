
        program swapProgram  
        implicit none 

        integer :: i = 2, j= 3

        print *, "i=", i, "j=", j

        call swap(i,j);

        print *, "i=", i, "j=", j

        contains       
                subroutine swap(a,b)
                implicit none  
                        integer :: a, b, temp 

                        temp = a 
                        a = b 
                        b = temp 
                end subroutine   

        end program  

