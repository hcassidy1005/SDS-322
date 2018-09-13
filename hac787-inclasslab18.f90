        program matrix 
        implicit none 
        integer :: i
        integer, dimension(100,100) :: A = 1  

        A(1:50,51:100) = 3
        A(51:100,1:50) = 2
        A(51:100,51:100) = 4

        print '(100(i1))', A
        
        end program  
