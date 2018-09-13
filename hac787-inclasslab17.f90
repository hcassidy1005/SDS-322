        program matrix 
        implicit none 
        integer, dimension(100,100) :: A=0  

        call identityMatrix(A, 100) 

        print '(100(i1))', A

        contains 
        subroutine identityMatrix(A, n) 
        implicit none 
        integer :: i, n
        integer, dimension(n,n):: A
        do i = 1, 100
                A(i,i) = 1 
        end do 
        end subroutine 
        
        end program  
